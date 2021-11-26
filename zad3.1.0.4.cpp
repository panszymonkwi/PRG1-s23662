#include <iostream>

	 auto amin(int a[], int n) -> int
	{
		auto k = 0;
		auto min = a[0];
		for (int i = 1; i < n; ++i) {
			if (a[i] < min) {
	          min = a[i];
			  k = i;
		    }
		}
		return k;
	}

auto main() -> int
{
 int a[100], n, min;
 std::cout << "Podaj rozmiar tablicy (co najwyzej 100) :";
 std::cin >> n;
 if (n >= 1 && n <=100)
    {
     for (int i=0; i<n; ++i) {
            a[i] = 0;
      }
    std::cout << "Podaj elementy tablicy (l.calkowite) : \n";

    for (auto i = 0; i < n; ++i)
      {
        std::cin >> a[i];
      }
    std::cout << "\n";
    min = amin(a, n);
    std::cout << "Indeks najmniejszej wartosci = " << min<< ", najmniejsza wartosc = " << a[min] << "\n";
    } else {
     std::cout << "Zly rozmiar tablicy. \n";
    }
std::cout << "\n";
return 0;
}

