#include <iostream>
#include <string>

auto main() -> int{

auto imie1 = std::string{};
auto imie2 = std::string{};
auto imie3 = std::string{};
auto imie4 = std::string{};
auto imie5 = std::string{};
std::cout << "Podaj pierwsze imie: " ;
std::cin >> imie1;
std::cout << "Podaj drugie imie: " ;
std::cin >> imie2;
std::cout << "Podaj trzecie imie: " ;
std::cin >> imie3;
std::cout << "Podaj czwarte imie: " ;
std::cin >> imie4;
std::cout << "Podaj piate imie: " ;
std::cin >> imie5;

auto i = 0;

if (imie1[imie1.size()-1] == 'a') {
    i = i + 1;
}
if (imie2[imie2.size()-1] == 'a') {
    i += 1;
}
if (imie3[imie3.size()-1] =='a') {
   i++;
 }
if (imie4[imie4.size()-1] == 'a') {
   i++;
 }
 if (imie5[imie5.size()-1] == 'a') {
    i++;
 }
 std::cout << "Imion zenskich jest " << i << ", imion meskich jest " << 5-i << ".\n";
return 0;
}
