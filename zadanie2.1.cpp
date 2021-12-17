#include <iostream>
#include <vector>

   auto average_of(std::vector<double> vec) -> double
    {
      auto sum = 0.0;
      auto avg = 0.0;
	  for (int i = 0; i< vec.size(); i++) {
	  		sum = sum + vec[i];
	  }
	  if (vec.size() > 0) {
            avg = sum / vec.size();
      }
	 return avg;
    }

auto main() -> int
{
    auto dl = 0;
    auto avg = 0.0;
    auto num = 0.0;
    auto numbers = std::vector<double>{};
    std::cout << "Podaj dlugosc wektora liczb rzeczywistych (dlugosc > 0) : ";
    std::cin >> dl;
    if (dl < 1) {
        std::cout << "Zla dlugosc!";
        return 0;
    }
    for (auto i = 0; i < dl; i++) {
        std::cout << "Podaj kolejny element wektora : ";
        std::cin >> num;
        numbers.push_back(num);
        }
   avg = average_of(numbers);
   std::cout << "Wczytany wektor : ";
   for (auto i = 0; i < numbers.size(); i++) {
      std::cout << numbers[i] << "  ";
  }
   std::cout<<"\n";
   std::cout << "Srednia arytmetyczna = " << avg << "\n";
   std::cout<<"\n";
   return 0;
}
