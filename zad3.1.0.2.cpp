#include <iostream>

	auto iota(int a[], int n, int start) -> void
	{
		for (int i = 0; i < n; ++i)
            {
			a[i] = start + i;
		    }
	}

auto main() -> int
{
    int a[100], n, start;
    std::cout << "Podaj rozmiar tablicy (co najwyzej 100):";
    std::cin >> n;
    if (n >= 1 && n <=100)
      {
        std::cout << "Podaj liczbe startowa (liczba calkowita):";
        std::cin >> start;
        iota(a, n, start);
        for (int i=0; i<n; ++i)
           {
            std::cout << a[i] << " ";
           }
        std::cout << "\n";
      }
    else {
      std::cout << "Zly rozmiar tablicy. \n";
      }
    std::cout << "\n";
 return 0;
}

