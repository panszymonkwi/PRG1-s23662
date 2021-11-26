#include <iostream>

	 auto asum(int a[], int n) -> int
	{
		auto sum = 0;
		for (int i = 0; i < n; ++i) {
			sum += a[i];
		}
		return sum;
	}

auto main() -> int
{
 int a[100], n, sum;
 std::cout << "Podaj rozmiar tablicy (co najwyzej 100) :";
 std::cin >> n;
 if (n >= 1 && n <=100)
   {
    std::cout << "Podaj elementy tablicy (l.całkowite) : \n";

    for (auto i = 0; i < n; ++i)
      {
        std::cin >> a[i];
      }
    sum = asum(a, n);
    std::cout << "Suma liczb tablicy wynosi "  <<  sum << "\n";
    }
   else {
     std::cout << "Zly rozmiar tablicy. \n";
    }
std::cout << "\n";
return 0;
}

