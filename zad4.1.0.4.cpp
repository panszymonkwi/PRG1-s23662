#include <iostream>
#include <set>

auto main() -> int
{
enum class DYSCYPLINY_SPORTU {
	bieganie,
	jezdziectwo,
	kolarstwo,
	plywanie,
	rzut_oszczepem,
	skok_w_dal,
	wspinaczka,
	zapasy,
	};

auto triathlon = std::set<DYSCYPLINY_SPORTU>{DYSCYPLINY_SPORTU::bieganie, DYSCYPLINY_SPORTU::plywanie,
                 DYSCYPLINY_SPORTU::kolarstwo};

std::cout << "Triatlon to : " << "\n";
std::cout << static_cast<int> (DYSCYPLINY_SPORTU::bieganie) << " = bieganie \n";
std::cout << static_cast<int> (DYSCYPLINY_SPORTU::kolarstwo) <<" = kolarstwo \n";
std::cout << static_cast<int> (DYSCYPLINY_SPORTU::plywanie) << " = plywanie \n";
return 0;
}

