#include <iostream>
#include <stdio.h>
#include <random>
#include <cstdlib>
#include <ctime>
#include <thread>
#include <sys/ioctl.h>
#include <termios.h>

 auto const bok = 25;
 char plansza[25][25];
 char klawisz;
 auto poziom = 0;

 auto czysta_plansza() -> void
    {
       for (auto i = 0; i < bok; ++i){
          plansza[i][0] = '*';
        }
       for (auto j= 1; j < bok -1 ; ++j) {
          plansza[0][j] = '*';
          for (auto i = 1; i < bok -1; ++i ){
             plansza[i][j] = ' ';
             }
          plansza[bok-1][j] = '*';
        }
        for (auto i = 0; i < bok; ++i) {
          plansza[i][bok-1] = '*';
        }
      return;  
      }
      
   auto widok_planszy(size_t wynik) -> void
   {
      system ("clear");
 
       for (auto i = 0; i < bok; ++i) {
        std::cout << " " << plansza [i][0];
        }
      std::cout << "    S  N  A  K  E \n";
      
      for (auto j = 1; j < bok; ++j) {
         for (auto i = 0; i < bok; ++i) {
             std::cout << " " << plansza[i][j];
         }
         if (j == 2) {
            std::cout << "      Poziom : " << poziom << "\n";
            } else if (j == bok/2) {
            std::cout << "    Wynik : " << wynik << "\n";
           } else {
            std::cout << "\n";
           }
       }
     return;  
    }

   auto gdzie_jedzenie() -> void
   {
     auto i = 1;
     auto j = 1;
     do
      {
       srand(time(NULL));
       i = std::rand() % 23 + 1;
       j = std::rand() % 23 + 1;
      } while (plansza[i][j]== '@' or plansza[i][j] == '#');
     plansza[i][j] = 'X';
     return;
   }

 auto maluj_snaka( int xs[], int ys[], size_t n) -> void {
      plansza [xs[n-1]][ys[n-1]] = ' ';
      for (int i = n -1; i> 0; i--) {
         xs[i] = xs[i-1];
	 ys[i] = ys[i-1];
	 plansza[xs[i]][ys[i]]= '#';
      }
  //  plansza[xs[0]][ys[0]]= '@';
     return;
    }
    
    auto getklawisz() -> int 
    {
      system("stty raw -echo"); 
      klawisz = getchar();
      system("stty cooked echo");
      return klawisz;
    }
    
    auto kbhit() -> bool
    {
      termios term;
      tcgetattr(0, &term);
      termios term2 = term;
      term2.c_lflag &= ~ICANON;
      tcsetattr(0, TCSANOW, &term2);
      int byteswaiting;
      ioctl(0, FIONREAD, &byteswaiting);
      tcsetattr(0, TCSANOW, &term);
      return byteswaiting > 0;
}

auto main() -> int
{
 int xs[530];  //tablica wspolrzednych x elementow snaka
  int ys[530];  //tablica wspolrzednych y elementow snaka
  auto left = false;
  auto right = false;
  auto up = true;
  auto down = false;
  auto wynik = 0;
  auto dlugosc = 3;

  std::cout << "Gra   S N A K E \n";
  do 
    { 
    std::cout << "Wybierz poziom trudnosci (1 - 10) : ";
    std::cin >> poziom;
    if (std::cin.fail() ) { 
      std::cin.clear();
      std::cin.sync();
      poziom = 10;
      } 
    } while ((poziom < 1) || (poziom > 10));
    
  xs[0] = bok/2;
  ys[0] = bok/2;
  xs[1] = bok/2;
  ys[1] = 1 + bok/2;
  xs[2]= bok/2;
  ys[2] = 2 + bok/2;
  czysta_plansza();
  plansza[bok/2][bok/2] = '@';
  plansza[bok/2][1+bok/2] = '#';
  plansza[bok/2][2+bok/2] = '#';
  gdzie_jedzenie();
  widok_planszy(wynik);
 
   std:: cout << "S T A R T!  Wcisnij enter. \n";
  klawisz = getklawisz();
  while (klawisz != 13) {
    klawisz = getklawisz();
    }
  
 while ((xs[0] !=0 ) && (xs[0] != 25) && (ys[0] != 0) && (ys[0] != 25)) {
   widok_planszy(wynik);
   int szybkosc = 600 -(50*poziom);
   std::chrono::milliseconds dura( szybkosc );
   std::this_thread::sleep_for( dura );
   maluj_snaka(xs, ys, dlugosc);
  
  if (kbhit()) {
     klawisz = getklawisz();
     if (klawisz == 27) {
       klawisz = getklawisz();
       if (klawisz == 91) {
         klawisz = getklawisz();
          if ((klawisz == 65) && (!down)){
            up = true;
            left = false;
            right = false;
            }        
          if ((klawisz == 66) && (!up)){
             down = true;
             right = false;
             left = false;
          }  
          if ((klawisz == 68) && (!right)) {
             left = true;
             up = false;
             down = false;
           }
           if ((klawisz == 67) && (!left)) {
              right = true;
              up = false;
              down = false;
             }
         }
      }
   } 
   if (up) {ys[0]--;}
   else if (down) {ys[0]++;}
       else if (right) {xs[0]++;}
           else if (left) { xs[0]--;};          
  
  if ((plansza[xs[0]][ys[0]] != '*' ) && (plansza[xs[0]][ys[0]] != '#')) {
    if (plansza[xs[0]][ys[0]] == 'X') {
      wynik = wynik + 1;
      dlugosc = dlugosc + 1;
      xs[dlugosc-1] = xs[dlugosc-2];
      ys[dlugosc-1] = ys[dlugosc-2];
      plansza [xs[dlugosc-1]][ys[dlugosc -1]] = '#';
      plansza[xs[0]][ys[0]] = '@';
      gdzie_jedzenie();
      widok_planszy(wynik);
     } else {
        plansza[xs[0]][ys[0]]= '@';
        }
   } else { 
      xs[0] = 0;
      }
 }
 std:: cout << "Ups...Koniec gry! \n";
 return 0;
}

