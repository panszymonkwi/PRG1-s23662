#include <iostream>
#include <string>

auto main() -> int
{
std::cout<< "Size of char* = " << sizeof(char*) << "\n";
std::cout<< "Size of int* = " << sizeof(int*) << "\n";
std::cout<< "Size of uint16_t* = " << sizeof(uint16_t*) << "\n";
std::cout<< "Size of uint32_t* = " << sizeof(uint32_t*) << "\n";
std::cout<< "Size of string* = " << sizeof(std::string*) << "\n";         //wszystkie 8
return 0;
}

