#include <iostream>

auto main() -> int
{
enum DYSCYPLINY_SPORTU {
	SPORT_bieganie       = 1,
	SPORT_jezdziectwo    = 2,
	SPORT_kolarstwo      = 4,
	SPORT_plywanie       = 8,
	SPORT_rzut_oszczepem = 16,
	SPORT_skok_w_dal     = 32,
	SPORT_wspinaczka     = 64,
	SPORT_zapasy         = 128,
	};

auto triathlon = SPORT_bieganie | SPORT_plywanie | SPORT_kolarstwo;
std::cout << "Triatlon to : \n";
std::cout << "bieganie  = " << DYSCYPLINY_SPORTU(SPORT_bieganie) << "\n";
std::cout << "plywanie  = " << DYSCYPLINY_SPORTU(SPORT_plywanie) << "\n";
std::cout << "kolarstwo = " << DYSCYPLINY_SPORTU(SPORT_kolarstwo) << "\n";
std::cout << "Wartosc triatlonu = " << triathlon << "\n";
std::cout << "Dyscypliny triatlonu : " << DYSCYPLINY_SPORTU(SPORT_bieganie) << "+" <<DYSCYPLINY_SPORTU(SPORT_plywanie)
       << "+" <<DYSCYPLINY_SPORTU(SPORT_kolarstwo) <<"\n";
return 0;
}

