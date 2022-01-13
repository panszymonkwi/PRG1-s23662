#include <iostream>
#include <iomanip>  //bibl. potrzebna do wyswietlania liczb zmiennoprzecink. z odp. precyzja
#include <string>
#include <vector>

struct student {
  std::string name;
  std::string surname;
  std::vector<double> grades;

  student(std::string imie, std::string nazwisko, std::vector<double> oceny) {
    name = imie;
    surname = nazwisko;
    grades = oceny;
   }
 };

   auto average_of( student st) -> double
  {
      auto sum = 0.0;
      auto avg = 0.0;
	  for (int i = 0; i< st.grades.size(); i++) {
	    sum = sum + st.grades[i];
	    }
	  if (st.grades.size() > 0) {
         avg = sum / st.grades.size();
      }
	 return avg;
   }

   auto print(std::vector<double> vec) -> void {
      for (auto element : vec) {
        std::cout << element << "  ";
        }
    }

    auto print_student(student st) -> void {
        std::cout << st.name << " " << st.surname << " - oceny: ";
        print(st.grades);
        std::cout << " srednia ocen: " << average_of(st) << "\n";
    }

auto main() -> int
{
  std::cout << std::setprecision(3);      //wyswietlanie liczb do 2 miejsc po przecinku

  auto student1  = student("Piotr", "Nowak", {3.5, 4, 5, 3, 4.5, 5});
  print_student(student1);

  student1  = student("Ala", "Kamyk", {});
  print_student(student1);

  std::cout << "\n";
  std::cout << "Srednia ocen studenta :\n";

  student1 = student("", "", {});
  std::cout << "imie : ";
  getline(std::cin, student1.name);
  std::cout << "nazwisko : ";
  getline(std::cin, student1.surname);
  std::cout << "oceny ( ocena 0 konczy wpisywanie ocen) : ";
  auto ocena = 0.0;
  do{
    std::cin >> ocena;
    if (ocena > 0.0) {
        student1.grades.push_back(ocena);
   }
  } while (ocena > 0.0);

  print_student(student1);

  return 0;
}
