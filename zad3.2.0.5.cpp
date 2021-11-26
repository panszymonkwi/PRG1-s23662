#include <iostream>

auto memcopy (void* cel, void* z, size_t n) -> void*
   {
      auto proxy = reinterpret_cast<char*>(cel);
      auto proxy2 = reinterpret_cast<char*>(z);
      for (auto i = size_t{0}; i < n; i++)
        {
            proxy[i] = proxy2[i];//(unsigned char)z[i];
        }
      return cel;
    }


auto main() -> int
{

char tab1[100], tab2[100];

int n, m, k, min;
 std::cout << "Podaj rozmiar tablicy docelowej (co najwyzej 100) : ";
 std::cin >> n;
 std::cout << "Podaj rozmiar tablicy zrodlowej (co najwyzej 100) : ";
 std::cin >> m;

 if ((n >= 1 && n <=100) && (m >= 1 && m <= 100))
    {
    std::cout << "Podaj elementy tablicy docelowej : \n";
    for (auto i = 0; i < n; ++i) {
        std::cin >> tab1[i] ;
       }
    std::cout << "Podaj elementy tablicy zrodlowej : \n";
    for (auto i = 0; i < m; ++i) {
        std::cin >> tab2[i];
    }
    std::cout << "Podaj liczbe elementow do podmiany : ";
    std::cin >> k;
    if (k< 1)
         k = 0;
    if (n > m) {
          min = m;}
     else {
            min = n;
          }
    if (k > n || k > m) {
        k = min;
       }

    memcopy(tab1, tab2, k);    //copiowanie k elementow tablicy 1 do tablicy 2

    for (auto i = 0; i < n; ++i) {
          std::cout << tab1[i] << " ";
        }
    std::cout << "\n";

    }
  else {
       std::cout << "Zly rozmiar tablic. \n";
      }
    return 0;
}







