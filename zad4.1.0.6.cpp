#include <iostream>
#include <set>

enum class Sport {
	bieganie,
	jezdziectwo,
	kolarstwo,
	plywanie,
	rzut_oszczepem,
	skok_w_dal,
	wspinaczka,
	zapasy,
	};

	  auto can_into_sport(std::set<Sport> const sportsman, Sport const sport) -> bool
      {
        auto const val = sportsman.count(sport);
        return val;
       }

 auto main() -> int
{
 auto sportsman = std::set<Sport>{Sport::bieganie, Sport::kolarstwo, Sport::plywanie};

 std::cout << "triatlon = " << static_cast<int>(Sport::bieganie)<< "+" <<static_cast<int>(Sport::kolarstwo)<<"+"<<static_cast<int>(Sport::plywanie);
 std::cout << " =  bieganie + kolarstwo + plywanie \n";
 std::cout << "bieganie : " << (can_into_sport(sportsman, Sport::bieganie)? "tak":"nie") << "\n";
 std::cout << "kolarstwo : " << can_into_sport(sportsman, Sport::kolarstwo) << "\n";
 std::cout << "plywanie : " << can_into_sport(sportsman, Sport::plywanie) << "\n";
 std::cout << "jezdziectwo : " << can_into_sport(sportsman, Sport::jezdziectwo) << "\n";
 std::cout << "rzut oszczepem : " << can_into_sport(sportsman, Sport::rzut_oszczepem) << "\n";
 std::cout << "skok w dal : " << (can_into_sport(sportsman, Sport::skok_w_dal)? "tak":"nie") << "\n";
 std::cout << "wspinaczka: " << can_into_sport(sportsman, Sport::wspinaczka) << "\n";
 std::cout << "zapasy: " << can_into_sport(sportsman, Sport::zapasy) << "\n";
 return 0;
}
