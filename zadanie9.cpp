#include <iostream>
#include <string>

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
       if ((str[i] >= 'A') && (str[i] <= 'Z')){
          str[i] = str[i] + 32;
          }
       if ((str[j] >= 'A') && (str[j] <= 'Z')){
          str[j] = str[j] + 32;
          }
       std::cout << str[i] << " " << str[j] << "\n";
       if (str[i] != str[j]){
           b = false;
           return b;
        }
        if(j <= i){
        return b;
        }
      }
      return b;
   }

auto main() -> int
{
     auto str = std::string();
     std::cout << "Podaj dowolny ciag znakow : ";
     std::getline(std::cin, str);

    if (is_palindrome(str)) {
        std::cout << "String jest palindromem. \n";
     } else {
      std::cout << "String nie jest palindromem. \n";
     };
    return 0;
}
