#include<iostream>
#include<random>

 auto call_with_random_int(void(*fp)(int const)) -> void
 {
     auto los = 0;
     std::random_device rd;
     std::uniform_int_distribution<> dist (-46340, 46340);  // sqrt(2147483647) ~ 46340,95
     los = dist(rd);
     std::cout << "Random value x = " << los << "\n" ;
     (*fp)(los);
     return ;
     }

 auto main() -> int
 {
     auto some_function(int const) -> void;
     auto fp = &some_function;
     call_with_random_int(fp);
     auto foo_function(int const) -> void;
     auto foop = &foo_function;
     call_with_random_int(foop);
     return 0;
 }

  //przykladowa funkcja
    auto some_function(int const x) -> void
    {
     std::cout <<"Kwadrat liczby = " << x*x << "\n";
     return;
  }

   auto foo_function(int const x) -> void
    {
     std::cout <<"Podwojona liczba = " << 2*x <<  "\n";
     return;
  }
