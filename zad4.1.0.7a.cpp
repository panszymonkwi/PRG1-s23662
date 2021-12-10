#include <iostream>

 enum SPORT {
	SPORT_bieganie       = 1,
	SPORT_jezdziectwo    = 2,
	SPORT_kolarstwo      = 4,
	SPORT_plywanie       = 8,
	SPORT_rzut_oszczepem = 16,
	SPORT_skok_w_dal     = 32,
	SPORT_wspinaczka     = 64,
	SPORT_zapasy         = 128,
	};

 auto to_string(SPORT const x) -> std::string
  {
    switch (x) {
       case SPORT_bieganie:
           return "bieganie";
       case SPORT_jezdziectwo:
           return "jezdziectwo";
       case SPORT_kolarstwo:
           return "kolarstwo";
       case SPORT_plywanie:
           return "plywanie";
       case SPORT_rzut_oszczepem:
           return "rzut oszczepem";
       case SPORT_skok_w_dal:
           return "skok w dal";
       case SPORT_wspinaczka:
           return "wspinaczka";
       case SPORT_zapasy:
           return "zapasy";
       default:
           return "brak takiej dyscypliny";
     }
  }


auto main() -> int
{
 int nr = 0;
 do
   {
   std::cout << "Podaj numer dyscypliny (1, 2, 4, 8, 16, 32, 64, 128) : ";
   std::cin >> nr;
 if (nr==1 || nr==2 || nr==4 || nr==8 || nr==16 || nr==32 || nr==64 || nr==128) {
      auto nbr = (SPORT)nr;
      auto dyscyplina = to_string(nbr);
      std::cout <<  "Dyscyplina (kod "<< nbr << ") - " << dyscyplina << "\n";
   } else {
      nr =0;
      std::cout << "Brak takiej dyscypliny";
      }
 } while (not (nr == 0));
 std::cout << "\n";
 return 0;
}
