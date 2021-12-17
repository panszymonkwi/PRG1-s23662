
#include <iostream>
#include <vector>

   auto dot_product(std::vector<double> vec1, std::vector<double> vec2) -> double
    {
      auto il_skal = 0.0;
      if (vec1.size() == vec2.size()) {
         for (int i = 0; i< vec1.size(); i++) {
	  		il_skal = il_skal + (vec1[i]*vec2[i]);
	  }
	}
	return il_skal;
    }

auto main() -> int
{
    auto dl = 1;
    auto num = 0.0;
    auto il_skal = 0.0;
    auto numbers1 = std::vector<double>{};
    auto numbers2 = std::vector<double>{};
    std::cout << "Podaj dlugosc wektorow liczb rzeczywistych (dlugosc > 0) : ";
    std::cin >> dl;
    if (dl < 1) {
        std::cout << "Zla dlugosc!";
        return 0;
    }
    for (auto i = 0; i < dl; i++) {
        std::cout << "Podaj kolejny element pierwszego wektora : ";
        std::cin >> num;
        numbers1.push_back(num);
        }
      for (auto i = 0; i < dl; i++) {
        std::cout << "Podaj kolejny element drugiego wektora : ";
        std::cin >> num;
        numbers2.push_back(num);
        }
   il_skal = dot_product(numbers1,numbers2);
   std::cout << "Wczytany wektor pierwszy : ";
   for (auto i = 0; i < dl; i++) {
      std::cout << numbers1[i] << "  ";
  }
   std::cout<<"\n";
   std::cout << "Wczytany wektor pierwszy : ";
   for (auto i = 0; i < dl; i++) {
      std::cout << numbers2[i] << "  ";
  }
   std::cout<<"\n";
   std::cout << "Iloczyn skalarny = " << il_skal << "\n";
   std::cout<<"\n";
   return 0;
}
