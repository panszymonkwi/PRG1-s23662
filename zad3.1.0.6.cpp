
#include <iostream>

	 auto search(int a[], int n, int needle) -> int
	{
	    auto k = 0;
		for (int i = 0; i < n; ++i) {
			if (a[i] == needle) {
		      k = i;
		      return k;
		    }
		}
	return -1;
	}

auto main() -> int
{
    int a[100], n, needle, indeks;
    std::cout << "Podaj rozmiar tablicy (co najwyzej 100):";
    std::cin >> n;
    if (n >= 1 && n <=100)
      {
       std::cout << "Podaj elementy tablicy (l.calkowite) : \n";
       for (auto i = 0; i < n; ++i)
         {
          std::cin >> a[i];
          }
          std::cout << "\n";
          std::cout << "Podaj szukana liczbe :";
          std::cin >> needle;
          indeks = search(a, n, needle);
          std::cout << "Indeks szukanej liczby = " << indeks << "\n";
       }
      else {
       std::cout << "Zly rozmiar tablicy. \n";
      }
return 0;
}
