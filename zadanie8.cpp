#include <iostream>
#include <string>

  auto display_chars(std::string str, int n) -> void
  {
    if (n > 0) {
        for (auto i = 0; i< str.size(); i+= n){
          std::cout << str[i];
        }
        std::cout << "\n";
    } else {
       std::cout << "Zla liczba! \n";
       }
  return;
  }

auto main() -> int
{
    auto str = std::string{};
    int n = 1;
    std::cout << "Podaj dowolny ciag znakow : ";
    std::getline(std::cin, str);
    std::cout << "Podaj, co ktory znak wyswietlac (liczba calkowita > 0) : ";
    std::cin >> n;

    if (not std::cin.good()) {
      std::cout << "To nie liczba! \n";
      return 0;
      }
    display_chars(str, n);
    return 0;
}
