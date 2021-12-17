#include <iostream>

   auto box_print(std::string str[5]) -> void
   {
     auto maxdl = 0;
     for (auto i = 0; i < 5; i++) {
         if (str[i].size() > maxdl) {
            maxdl = str[i].size();
         }
     }

     for (auto j = 1; j <= maxdl+4; j++) {
      	std::cout << "*";
		}
	 std::cout << "\n";
   	 for (auto i = 0; i < 5; i++)
	  	{
      	 std::cout<<"* "  << str[i];
         for (auto j = 0; j < (maxdl-str[i].size()); j++) {
      			std::cout <<" ";
                }
      	 std::cout << " *\n";
        // std::cout << "\n";
		 }
	  for (auto j = 1; j <= maxdl+4; ++j) {
      	std::cout << "*";
		}
      std::cout << "\n";

   }



  auto main() -> int
  {
      std::string zmienne[5] = {" "};

      for (auto i = 0; i < 5; i++) {
      std::cout << "Podaj string " << i+1 << " : " ;
     // std::cin >> zmienne[i];
     std::getline(std::cin, zmienne[i]);
    }
    std::cout << "\n";
    box_print(zmienne);
    return 0;
}
