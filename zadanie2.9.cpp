#include <iostream>
#include <vector>

   auto contains_all(std::vector<double> vec1, std::vector<double> vec2) -> bool
    {
      auto zawiera = true;
      for (auto i = 0; i < vec2.size() && zawiera; i++){
        zawiera = false;
        for (auto j = 0; j < vec1.size() && (!zawiera); j++) {
            if (vec2[i] == vec1[j]) {
                    vec1.erase(vec1.begin()+j);
                    zawiera = true;
            }
        }
      }
    return zawiera;
    }

auto main() -> int
{
    auto dl1 = 1;
    auto dl2 = 1;
    auto num = 0.0;
    auto numbers1 = std::vector<double>{};
    auto numbers2 = std::vector<double>{};
    std::cout << "Podaj dlugosc pierwszego wektora liczb rzeczywistych (dlugosc > 0) : ";
    std::cin >> dl1;
    if (dl1 < 1) {
        std::cout << "Zla dlugosc!";
        return 0;
    }
    std::cout << "Podaj dlugosc drugiego wektora liczb rzeczywistych (dlugosc > 0) : ";
    std::cin >> dl2;
    if (dl2 < 1) {
        std::cout << "Zla dlugosc!";
        return 0;
    }
    if (dl1 < dl2) {
       std::cout << "Wektor pierwszy nie zawiera wektora drugiego (jest krotszy). \n";
       return 0;
    }

    for (auto i = 0; i < dl1; i++) {
        std::cout << "Podaj kolejny element pierwszego wektora : ";
        std::cin >> num;
        numbers1.push_back(num);
        }
      for (auto i = 0; i < dl2; i++) {
        std::cout << "Podaj kolejny element drugiego wektora : ";
        std::cin >> num;
        numbers2.push_back(num);
        }

   std::cout << "Wczytany wektor pierwszy : ";
   for (auto i = 0; i < dl1; i++) {
      std::cout << numbers1[i] << "  ";
   }
   std::cout<<"\n";
   std::cout << "Wczytany wektor drugi    : ";
   for (auto i = 0; i < dl2; i++) {
      std::cout << numbers2[i] << "  ";
  }
   std::cout<<"\n";
   if (contains_all(numbers1, numbers2)){
       std::cout << "Wektor pierwszy zawiera wektor drugi. \n";
   } else {
       std::cout << "Wektor pierwszy nie zawiera wektora drugiego. \n";
       }
   return 0;
}
