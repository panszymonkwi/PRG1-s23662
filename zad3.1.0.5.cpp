#include <iostream>

	 auto amax(int a[], int n) -> int
	{
		auto k = 0;
		auto max = a[0];
		for (int i = 1; i < n; ++i) {
			if (a[i] > max) {
			  max = a[i];
			  k = i;
		    }
		}
		return k;
	}

auto main() -> int
{
 int a[100], n, max;
 std::cout << "Podaj rozmiar tablicy (co najwyzej 100) :";
 std::cin >> n;
 if (n >= 1 && n <=100)
    {
    std::cout << "Podaj elementy tablicy (l.całkowite) : \n";

    for (auto i = 0; i < n; ++i)
      {
        std::cin >> a[i];
      }
    std::cout << "\n";
    max = amax(a, n);
    std::cout << "Indeks najwiekszej wartosci = " << max << ", najwieksza wartosc = " << a[max] << "\n";
    } else {
     std::cout << "Zly rozmiar tablicy. \n";
    }
return 0;
}



