#include <iostream>

	 auto sort_desc(int a[], int n ) -> void
	{
	   //sort przez wstawianie
       	for (int i = 1; i < n; ++i) {
			// wstawiamy element a[i] w posortowany ciag a[0],a[1]...a[i-1] malejaco
			auto wstawiany = a[i];
			int j = i-1;
			while ((j >= 0) && (a[j] < wstawiany)) {
			    a[j+1] = a[j];
			    j = j - 1;
			}
			a[j+1] = wstawiany;
		}
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
     sort_desc(arr, n);
     std::cout << "Tablica posortowana malejaco \n";
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




