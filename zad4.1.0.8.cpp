#include <iostream>

 enum class SPORT {
	bieganie = 1,
	jezdziectwo,
	kolarstwo,
	plywanie,
	rzut_oszczepem,
	skok_w_dal,
	wspinaczka,
	zapasy,
	};

  auto to_string(SPORT const x) -> std::string
  {
    switch (x) {
       case SPORT::bieganie:
           return "bieganie";
       case SPORT::jezdziectwo:
           return "jezdziectwo";
       case SPORT::kolarstwo:
           return "kolarstwo";
       case SPORT::plywanie:
           return "plywanie";
       case SPORT::rzut_oszczepem:
           return "rzut oszczepem";
       case SPORT::skok_w_dal:
           return "skok w dal";
       case SPORT::wspinaczka:
           return "wspinaczka";
       case SPORT::zapasy:
           return "zapasy";
      }
  }

auto main() -> int
{
int number = 0;
do
 {
   std::cout << "Podaj numer dyscypliny (1 - 8) : ";
   std::cin >> number;

   if (number > 0 && number < 9) {
        auto nbr = static_cast < SPORT >( number );
        auto dyscyplina = to_string(nbr);
        std::cout <<  "Dyscyplina  " << number << " - " << dyscyplina << "\n";
       } else {
      number = 0;
       std::cout <<  "Takiej dyscypliny brak. \n";
      }
  } while (number > 0 && number < 9);
 return 0;
}
