#include <iostream>
#include <string>

auto count_chars(std::string str, char c) -> int
{
    auto licznik = 0;
    for (auto i = 0; i< str.size(); i++){
       if (str[i] == c) {
        licznik++;
       }
    }
 return licznik;
}

auto main() -> int
{
    auto str = std::string{};
    char c;
    bool koniec = false;
    std::cout << "Podaj dowolny ciag znakow : ";
    std::getline(std::cin, str);

    while (not koniec){
       std::cout << "Podaj wybrany znak : ";
       std::cin >> c;
       std::cout << "Liczba wystapien w ciagu : " << count_chars(str, c) << std::endl;
       if (count_chars(str, c)== 0) {
         koniec = true;
       }
    }
   return 0;
}
