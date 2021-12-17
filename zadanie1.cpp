#include <iostream>
#include <string>
#include <vector>

   auto integer_is_prime(int num) -> bool
    {
      auto prime = true;
	  if (num < 2) {
            prime = false;
	  } else {
	  	for (int i = 2; i*i <= num; i++) {
	  		if (num % i == 0) {
	  			prime = false;
	  			return prime;
			}
		}
	  }
	 return prime;
    }

auto main() -> int
{
    auto str = std::string{};
    auto numbers = std::vector<int>{};
    for (auto i = 2; i <= 20; i++)
    {
        if (integer_is_prime(i)) {
         numbers.push_back(i);
         str = str + std::to_string(i)+" ";
         }
    }
   std::cout << str << "\n";

 //  for (auto i = 0; i < str.size(); i++) {
 //      std::cout << str[i];}
 //  std::cout <<"\n";

   for (auto i = 0; i < numbers.size(); i++) {
        std::cout << numbers[i] << " ";
    }
    std::cout<<"\n";

    return 0;
}
