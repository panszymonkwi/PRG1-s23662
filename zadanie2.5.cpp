#include <iostream>
#include <string>
#include <vector>

  auto split( std::string zdanie) -> std::vector<std::string>
  {
    auto vec = std::vector<std::string>{};
    auto poz_spacji = -1;
    zdanie = zdanie + " ";
    for (int i = 0; i< zdanie.size(); i++) {
      if ((zdanie[i] == ' ') || (zdanie[i] == ',') || (zdanie[i] == '.')) {
        if (i - poz_spacji > 1){
          std::string str = zdanie.substr(poz_spacji+1, i-1-poz_spacji);
          vec.push_back(str);
           poz_spacji = i;
         } else {
            poz_spacji++;
            }
        }
     }
   	return vec;
   }

   auto print(std::vector<std::string> vec) -> void {
      for (auto i = 0; i < vec.size()-1; i++) {
        std::cout << vec[i] << ", ";
        }
       std::cout << vec[vec.size()-1];
    }

  auto main() -> int
{
  auto tekst = std::string{};
  std::cout << "Napisz dowolne zdanie: ";
  std::getline(std::cin, tekst);
  std::cout << "Wektor slow {";
  print(split(tekst));
  std::cout << "} \n";
  return 0;
}
