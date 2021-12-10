#include <iostream>
#include <string>

auto main() -> int{

auto imie1 = std::string{};
auto imie2 = std::string{};
std::cout << "Podaj pierwsze imie: " ;
std::cin >> imie1;
std::cout << "Podaj drugie imie: " ;
std::cin >> imie2;
if (imie1.size() > imie2.size()) {
    std::cout << "Pierwsze imie dluzsze" << "\n";
    } else if (imie2.size() > imie1.size()) {
      std::cout << "Drugie imie dluzsze" << "\n";
       } else {
           std::cout << "Imiona tej samej dlugosci" << "\n";
         }
return 0;
}
