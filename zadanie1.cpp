#include <iostream>
#include <string>




auto main() -> int
{
    auto str = std::string("2 3 5 7 11 13 17 19");
    std::cout << str << "\n";

    for (auto i = 0; i < str.size(); i++) {
       std::cout << str[i];
    }
    std::cout <<"\n";


    return 0;
}
