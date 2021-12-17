#include <iostream>

auto is_even(int n) -> bool
{
    auto b = false;
    if (n%2 == 0) {
        b = true;
    }
 return b;
}

auto main() -> int
{
    auto liczba = 0;
    std::cout << "Podaj liczbe calkowita : ";
    std::cin >> liczba;
    if (not std::cin.good()) {
        std::cout << "To nie liczba!" << std::endl;
        return 0;
    }
    if (is_even(liczba)) {
        std::cout << "Liczba parzysta. \n";
     } else {
      std::cout << "Liczba nieparzysta. \n";
    }
return 0;
}
