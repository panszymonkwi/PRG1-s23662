#include<iostream>
#include<string>

auto main() -> int
 {
std::cout<< "Size of char = " << sizeof(char) << "\n";                             // 1
std::cout<< "Size of unsigned char = " << sizeof(unsigned char) << "\n";           // 1
std::cout<< "Size of int = " << sizeof(int) << "\n";                               // 4
std::cout<< "Size of unsigned int = " << sizeof(unsigned int) << "\n";             // 4
std::cout<< "Size of uint16_t = " << sizeof(uint16_t) << "\n";                     // 2
std::cout<< "Size of uint32_t = " << sizeof(uint32_t) << "\n";                     // 4
std::cout<< "Size of long = " << sizeof(long) << "\n";                             // 4
std::cout<< "Size of unsigned long = " << sizeof(unsigned long) << "\n";           // 4
std::cout<< "Size of long long = " << sizeof(long long) << "\n";                   // 4
std::cout<< "Size of unsigned long long = " << sizeof(unsigned long long) << "\n"; // 4
std::cout<< "Size of float = " << sizeof(float) << "\n";                           // 4
std::cout<< "Size of double = " << sizeof(double) << "\n";                         // 8
std::cout<< "Size of std::string = " << sizeof(std::string) << "\n";                    // 32
return 0;
}
