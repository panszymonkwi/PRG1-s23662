#include <iostream>
#include <string>

   auto memrev(void* s, size_t n) -> void*
     {
     char* proxy = reinterpret_cast<char*>(s);
     char arr[n]= {};
     for (auto i = size_t{0}; i < n; i++)
      {
       arr[i] = proxy[i];
      }
     for (auto i = size_t{0}; i < n ; i++)
      {
       proxy[i] = arr[n-1-i];
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
   std::cout << "Odwrocona kolejnosc elementow : \n";
   memrev(tab, n);
   for (auto i = 0; i < n; ++i) {
       std::cout << tab[i] << " ";
     }
    std::cout << "\n";
    }
   else {
    std::cout << "Zly rozmiar tablicy. \n";
    }
return 0;
}
