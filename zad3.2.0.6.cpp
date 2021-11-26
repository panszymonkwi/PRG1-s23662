#include <iostream>

auto memfrob (void* s, size_t n) -> void*
 {
      auto proxy = reinterpret_cast<char*>(s);
      for (auto i = size_t{0}; i < n; i++)
        {
            proxy[i] = (uint8_t)proxy[i];
            proxy[i] = (proxy[i]^42);
         }
 return s;
 }

auto main() -> int
{
char tab[100], w;
int n;
 std::cout << "Podaj rozmiar tablicy (co najwyzej 100) : ";
 std::cin >> n;
 if (n >= 1 && n <=100)
    {
    std::cout << "Podaj elementy tablicy : \n";
    for (auto i = 0; i < n; ++i) {
        std::cin >> tab[i];
    }
    std::cout << "Po zaszyfrowaniu :\n";
    memfrob(tab, n);
    for (int i = 0; i < n; ++i)
        {
        std::cout << tab[i];
        }
     std::cout << "\n";
     std::cout << "Po deszyfryzacji :\n";
     memfrob (tab, n);
     for (int i = 0; i < n; ++i)
       {
        std::cout << tab[i];
        }
    std::cout << "\n";
    }
   else {
       std::cout << "Zly rozmiar tablicy. \n";
      }
   //std::cout << "\n";
  return 0;
}
