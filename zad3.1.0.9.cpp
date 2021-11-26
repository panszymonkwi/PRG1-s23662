#include <iostream>
#include <algorithm>

     auto compare(const void* x, const void* y) -> int       //compare - funkcja porównujaca elementy
    {
        return *(int*)x - *(int*)y;
    }

	 auto quicksort(int a[], int n ) -> void
	{
	   qsort(a, n, sizeof(int), compare);              // qsort - funkcja szybkiego sortowania tablicy liczb
	return;
	}

auto main() -> int
{
 int arr[100], n;
 std::cout << "Podaj rozmiar tablicy (co najwyzej 100):";
 std::cin >> n;
 if (n >= 1 && n <=100)
    {
     std::cout << "Podaj elementy tablicy (l.calkowite) : \n";
     for (auto i = 0; i < n; ++i)
       {
        std::cin >> arr[i];
        }
     std::cout << "Tablica przed sortem \n";
     for (int i=0; i<n; ++i){
        std::cout<<arr[i]<<' ';
        }
     std::cout << "\n";
     quicksort(arr, n);
     std::cout << "Tablica posortowana algorytmem Quicksort \n";
     for (int i=0; i<n; ++i) {
         std::cout<<arr[i]<<' ';
         }
     std::cout << "\n";
    }
   else {
    std::cout << "Zly rozmiar tablicy. \n";
   }
return 0;
}



