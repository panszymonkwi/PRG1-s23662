 #include <iostream>

   auto memset(void* a, int value, size_t n) -> void*
   {
      auto proxy = reinterpret_cast<char*>(a);
      for (auto i = size_t{0}; i < n; i++)
        {
            proxy[i] = value ;
        }
      return a;
    }

auto main() -> int
{
char tab[100], w;
int n, m;
 std::cout << "Podaj rozmiar tablicy (co najwyzej 100) : ";
 std::cin >> n;
 if (n >= 1 && n <=100)
    {
    std::cout << "Podaj elementy tablicy : \n";
    for (auto i = 0; i < n; ++i) {
        std::cin >> tab[i];
    }
    std::cout << "Podaj liczbe elementow do podmiany : ";
    std::cin >> m;
    if (m< 1) m = 0;
    if (m > n) m = n;
    std::cout << "Podaj na jaka wartosc wymienic : ";
    std::cin >> w;

    memset(tab, w, m);    //wypelnienie tablicy m wartosciami w z przodu

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
