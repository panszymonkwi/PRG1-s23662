#include <iostream>
#include <array>

   auto fpsearch(void* a[], size_t n, bool (*fp)(void*, void*), void* needle) -> size_t
    {
      auto i = 0;
      auto b = false;
      auto indeks = -1;
      while ( i < n and not b) {
         b = (*fp)((a[i]), needle);
      if ( b ) {
         indeks = i;
        }
      ++i;
      }
     return indeks;
    }

  auto equal_function(void* x, void* y) -> bool
    {
      auto nx = reinterpret_cast<char*>(x);
      auto ny = reinterpret_cast<char*>(y);
      if (*nx == *ny) {
        return true;
      } else {
        return false;
      }
    }

auto main(int argc, char* argv[]) -> int
 {
     if (argc == 1) {
         std::cout << "Za malo argumentow, podaj elementy tablicy. \n";
         return 1;
         }

     void* a[100];
     int n = argc -1;

     for (auto i = 0 ; i < n; ++i){
         a[i] = argv[i+1];
         auto a_val = reinterpret_cast<char*>(a[i]);
         std::cout <<*(a_val) << " ";
         }
     std::cout << "\n";

     auto value = '0';
     std::cout << "Poszukiwana wartosc : ";
     std::cin >> value;
     auto needle = &value;
     auto fp = &equal_function;
     auto indeks = fpsearch(a, n, fp, needle);
     if (indeks == -1){
       std::cout << "Brak szukanej wartosci. \n";
   } else {
       std::cout << "Indeks szukanej wartosci : " << indeks << "\n";
   }
return 0;
}

