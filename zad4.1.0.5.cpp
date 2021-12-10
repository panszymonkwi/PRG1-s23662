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

  auto can_into_sport(int const sportsman, SPORT const sport) -> bool
  {
    return (sport & sportsman);
   }

 auto main() -> int
{
 auto sportsman = SPORT_bieganie | SPORT_kolarstwo | SPORT_plywanie;

 std::cout << sportsman<< " = " <<SPORT(SPORT_bieganie) << "+" <<SPORT(SPORT_kolarstwo) << "+"<<SPORT(SPORT_plywanie);
 std::cout << " =  bieganie + kolarstwo + plywanie \n";
 std::cout << "bieganie : " << (can_into_sport(sportsman, SPORT_bieganie)? "tak":"nie") << "\n";
 std::cout << "kolarstwo : " << (can_into_sport(sportsman, SPORT_kolarstwo)? "tak":"nie") << "\n";
 std::cout << "plywanie : " << (can_into_sport(sportsman, SPORT_plywanie)? "tak":"nie") << "\n";
 std::cout << "jezdziectwo : " << (can_into_sport(sportsman, SPORT_jezdziectwo)? "tak":"nie") << "\n";
 std::cout << "rzut oszczepem : " << (can_into_sport(sportsman, SPORT_rzut_oszczepem)? "tak":"nie") << "\n";
 std::cout << "skok w dal : " << (can_into_sport(sportsman, SPORT_skok_w_dal)? "tak":"nie") << "\n";
 std::cout << "wspinaczka: " << (can_into_sport(sportsman, SPORT_wspinaczka)? "tak":"nie") << "\n";
 std::cout << "zapasy: " << (can_into_sport(sportsman, SPORT_zapasy)? "tak":"nie") << "\n";
 return 0;
}
