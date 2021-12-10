#include <iostream>
#include <string>

auto main() -> int
{
    auto imie = std::string("Kacper");
    double waga = 50.5;
    auto wzrost = 165;

    std::cout << "Imie: " << imie << "\n";
    std::cout <<"\n";
    std::cout << "Waga: " << waga << " kg \n";
    std::cout <<std::endl;
    std::cout << "Wzrost: " << wzrost << " cm \n";
    std::cout <<std::endl;

    return 0;
}
