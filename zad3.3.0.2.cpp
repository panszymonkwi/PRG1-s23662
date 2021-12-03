#include<iostream>

 auto all(void* a[], size_t n, bool(*fp)(void*)) -> bool
 {
     bool y = true;
     for (auto i = 0; i < n; ++i){
         if ( not(*fp)(a[i]) ) {
             y = false;
         }
     }
     return y;
  }

 auto main(int argc, char* argv[]) -> int
 {
     if (argc == 1) {
         std::cout << "Za malo argumentow, podaj co najmniej jeden. \n";
         return 1;
         }

     void* a[100];
     int n = argc;         // argv[0] zawiera nazwe programu

     for (auto i = 0 ; i < n-1; ++i){
         a[i] = argv[i+1];
         auto a_val = reinterpret_cast<char*>(a[i]);
         std::cout << *(a_val) << " ";
         }

     auto some_function(void*) -> bool;
     auto fp = &some_function;

     bool val = all(a, n-1, fp);
     if (val == false) {
        std::cout << " ->  FALSE";
     } else {
         std::cout << " ->  TRUE";
     }
   return 0;
  }

  // przykladowa funkcja
  auto some_function(void* x) -> bool
  {
   auto ap = reinterpret_cast<char*>(x);     //  jesli wskaznik x wskazuje na 0 to false w przecimnym razie true
   char a = *ap;
   if (a == '0') {
     std::cout << "false" << " ";
     return false;
   }
   else {
     std::cout << "true" << " ";
    return true;
   }
  }
