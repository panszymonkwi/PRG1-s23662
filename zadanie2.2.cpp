#include <iostream>
#include <string>
#include <vector>

  auto is_palindrome(std::string str) -> bool
  {
     auto i = 0;
     auto j = str.size()-1;
     auto b = true;
     for (i = 0; i< str.size(); i++, j--){
       while (str[i] == ' ') {
          i++;
          }
       while (str[j] == ' ') {
          j--;
          }
       if ((str[i] >= 'A') && (str[i] <= 'Z')) {
           str[i] = str[i] + 32;
            }
       if ((str[j] >= 'A') && (str[j] <= 'Z')) {
            str[j] = str[j] + 32;
            }
   //    std::cout << str[i] << " " << str[j] << "\n";
       if (str[i] != str[j]){
           b = false;
           return b;
        }
       if (j <= i) {
         return b;
       }
      }
      return b;
   }

   auto filter_palindromes(std::vector<std::string> vec) -> std::vector<std::string>
   {
      auto newvec = std::vector<std::string>{};
      for (auto i = 0; i < vec.size(); i++)
      {
          if (is_palindrome(vec[i])) {
              newvec.push_back(vec[i]);
              }
      }
    return newvec;
   }
auto main() -> int
{
    auto dl = 0;
    auto str = std::string();
    auto vecstr = std::vector<std::string>{};

    std::cout << "Podaj dlugosc wektora (dlugosc > 0) : ";
    std::cin >> dl;
    if (dl < 1) {
        std::cout << "Zla dlugosc!";
        return 0;
    }

std::cin.clear();
std::cin.sync();
    for (auto i = 0; i < dl; i++) {
        std::cout << "Podaj kolejny element wektora (string) : ";
        //std::getline(std::cin, str);
        std::cin >> str;
        vecstr.push_back(str);
        }
   vecstr = filter_palindromes(vecstr);
   std::cout << "Palindromy : ";
   for (auto i = 0; i < vecstr.size(); i++) {
      std::cout <<  vecstr[i] << "   ";
  }
  std::cout << "\n";
    return 0;
}
