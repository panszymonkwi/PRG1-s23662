#include <iostream>
#include<cmath>

class Punkt {
 private:
    int x;
    int y;
 public:
   Punkt (int const& px, int const& py) {
     x = px;
     y = py;
     }
~Punkt(){
}

   auto getX() -> int {
         return x;
          }
   auto getY()  -> int {
         return y;
          }
  };

class Prostokat {
 public:
   Punkt  wlg;    //wierzcholek lewy gorny
   Punkt  wpd;    //wierzcholek prawy dolny
 public:
   Prostokat(int const& xl, int const& yg, int const& xp, int const& yd)
     : wlg(Punkt(xl, yg))
     , wpd(Punkt(xp, yd))
     {}
   /*  Prostokat(Punkt const& plg, Punkt const& ppd) {
        wlg = plg;
        wpd = ppd;
        }
      */
    Prostokat(Punkt const& plg, Punkt const& ppd)
        : wlg(plg)
        , wpd(ppd)
        {}

    ~Prostokat(){
        std::cout << "(Obiekt usuniety)\n";
        }

   auto showP( int x, int y) -> void {
       std::cout << "(" << x << ", " << y << "), ";
   }

   auto opis() -> void {
       std::cout << "Prostokat o wierzcholkach: ";
       showP(wlg.getX(), wlg.getY());
       showP(wpd.getX(), wlg.getY());
       showP(wlg.getX(), wpd.getY());
       showP(wpd.getX(), wpd.getY());
       std::cout << " dlugosci bokow: " << abs(wpd.getX() - wlg.getX()) << ", " << abs(wpd.getY() - wlg.getY()) <<"\n";
       }
   auto pole()  -> double
  {
     std::cout << "Pole prostokata wynosi: ";
       return abs((wpd.getX() - wlg.getX())*(wpd.getY() - wlg.getY())) ;
  }

  auto punkt_gdzie_lezy(Punkt pkt) -> void {
      showP(pkt.getX(), pkt.getY());
   if ((pkt.getX() < wpd.getX())&&(pkt.getX() > wlg.getX())&&(pkt.getY() < wpd.getY()) && (pkt.getY() > wlg.getY())) {
       std::cout << " punkt lezy wewnatrz prostokata.\n";
    } else {
       std::cout << " punkt nie lezy wewnatrz prostokata.\n";
       }
    }
};
    auto podaj_wspolrzedne() -> Punkt {
         auto x = 0;
         auto y = 0;
         std::cout << "Podaj wspolrzedna x badanego punktu: ";
         std::cin >> x;
         std::cout << "Podaj wspolrzedna y badanego punktu: ";
         std::cin >> y;
         auto pkt = Punkt(x, y);
        return pkt;
    }

  auto main() -> int
{
    Prostokat pr = Prostokat(1, 5, 3, 8);
    pr.opis();
    std::cout << pr.pole() << "\n";
    auto pkt = podaj_wspolrzedne();
    pr.punkt_gdzie_lezy(pkt);

    auto p1 = Punkt(1,4);
    auto p2 = Punkt(6,11);
    pr = Prostokat(p1, p2);
    std::cout << "\n";
    pr.opis();
    std::cout << pr.pole() << "\n";
    pkt = podaj_wspolrzedne();
    pr.punkt_gdzie_lezy(pkt);
  return 0;
}

