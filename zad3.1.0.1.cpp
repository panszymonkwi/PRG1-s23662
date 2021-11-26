#include <iostream>

	 auto init(int a[], int n) -> void
	{
	 // for (int i = 0; i < n; ++i) {
       //    a[i] = "0";
	  //}
	  std::fill_n(a, n, 0);
	}

auto main() -> int
{
  int a[100], n;
  std::cout << "Podaj rozmiar tablicy (co najwyzej 100):";
  std::cin >> n;
  if (n >= 1 && n <=100)
    {
     init (a, n);
     for (int i = 0; i < n; ++i) {
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

