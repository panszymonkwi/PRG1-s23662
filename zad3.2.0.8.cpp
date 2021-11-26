#include <iostream>
#include <random>

 auto memrand(void* s, size_t n) -> void*
  {
    auto proxy = reinterpret_cast<char*>(s);
    std::random_device rd;
    std::uniform_int_distribution<> dist (0, 255);
    for (auto i = size_t{0}; i < n; ++i) {
         proxy[i] = char(dist(rd));
     }
   return s;
  }


auto main() -> int
{
 char los[100];
 int n;
 std::cout << "Podaj rozmiar obszaru (co najwyzej 100) : ";
 std::cin >> n;
 if (n >= 1 && n <=100)
    {
    memrand(los, n);
    for (auto i = 0; i < n; ++i) {
    std::cout << los[i] << " ";
    }
  std::cout << "\n";
    }
 else {
       std::cout << "Zly rozmiar obszaru. \n";
      }
}
