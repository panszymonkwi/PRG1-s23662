#include <iostream>

  auto is_divisible(int liczba, int dzielnik) -> bool
  {
    auto b = false;
    if (dzielnik != 0) {
       if (liczba%dzielnik == 0){
         b = true;
         std::cout << "Liczba podzielna przez " << dzielnik << std::endl;
         } else {
          std::cout << "Liczba niepodzielna przez " << dzielnik << std::endl;
         }
       } else {
         std::cout << "Nie dzielimy przez zero!"<< std::endl;
       }
     return b;
   }

   auto is_even(int n) -> bool
   {
     return is_divisible(n, 2);
   }

auto main() -> int
{
    auto liczba = 0;
    std::cout << "Podaj liczbe calkowita : ";
    std::cin >> liczba;
    if (not std::cin.good()) {
        std::cout << "To nie liczba! \n";
        return 0;
    }
    if (is_even(liczba)) {
        std::cout << "Liczba parzysta. \n";
     } else {
      std::cout << "Liczba nieparzysta.\n";
    }

return 0;
}
