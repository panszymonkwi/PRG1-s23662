#include <iostream>

 class Punkt {
  private:
       int x;
       int y;

  public:
     Punkt(int const& wsp_x, int const& wsp_y) {
       x = wsp_x;
       y = wsp_y;
       std::cout << "Utworzono punkt (" << x << ", " << y <<"). \n";
      }

     Punkt(Punkt const& p) {
      x = p.x;
      y = p.y;
      std::cout << "Utworzono punkt (" << x << ", " << y <<"). \n";
     }

     ~Punkt() {
       std::cout << "punkt usuniety! ";
       }

    auto show() -> void {
       std::cout << "Wspolrzedne punktu to (" << x << ", " << y <<"). \n";
     }
    auto getX() -> int {
        return x;
        }
    auto getY() -> int {
       return y;
       }
    auto setXY(int const& wsp_x, int const& wsp_y) -> void {
        x = wsp_x;
        y = wsp_y;
    }
     auto setXY(Punkt const& p) -> void {
        x = p.x;
        y = p.y;
    }

     auto getXY() -> Punkt {
       Punkt p = Punkt{x, y};
      return p;
     }

  };

 auto main() -> int
 {
     auto p1 = Punkt{1, 2};
       std::cout << "Wspolrzedne punktu to (" << 1 <<", " << 2 <<"). \n";
     auto p2 = Punkt{5, 3};
       std::cout << "Wspolrzedne punktu to (" << 5 << ", " << 3 << "). \n\n";

       std::cout << "Punkt p1 \n";
       p1.show();
       std::cout << "Punkt p2 \n";
       p2.show();

       std::cout << "\n";
       auto x = p1.getX();
       auto y = p1.getY();
       std::cout << "Punkt p1 \n";
       p1.show();
       std::cout << "Wspolrzedne punktu p1 to (" << x << ", " << y << "). \n\n";

       p2.setXY(7, 4);
       std::cout << "Punkt p2 \n";
       p2.show();
       p2.setXY(5, 3);
       p2.show();

       std::cout << "\n";
       p2.setXY(p1);
       std::cout << "Punkt p2 = p1 \n";
       p2.show();
       p2.setXY(5, 3);

       std::cout << "\n";
       auto p3 = p1.getXY();
       std::cout << "Punkt p3 \n";
       p3.show();

       std::cout << "\n";
       std::cout << "Punkt p4 \n";
       auto p4 = Punkt(7,8);
       std::cout << "Punkt p5 \n";
       auto p5 = Punkt(9,1);

       std::cout << "\n";
       std::cout << "Punkt p6 = p1 \n";
       auto p6 = Punkt(p1);
       std::cout << "Punkt p7 = p2 \n";
       auto p7 = Punkt(p2);

       std::cout << "\n";

  return 0;
 };

