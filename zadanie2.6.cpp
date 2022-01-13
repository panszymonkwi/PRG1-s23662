#include <iostream>
#include <iomanip>  //bibl. potrzebna do wyswietlania liczb zmiennoprzecink. z odp. precyzja
#include <string>
#include <vector>

struct student {
  std::string name;
  std::string surname;
  std::vector<double> grades;
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

   auto get_best_student( std::vector<student> students) -> student
  {
    student best_student = student();
    auto avg = 0.0;
	if (students.size() > 0) {
      best_student = students[0];
      auto best_avg = average_of(students[0]);
      for (int i = 0; i< students.size(); i++) {
        avg = average_of(students[i]);
	    if (best_avg < avg) {
          best_student = students[i];
          best_avg = avg;
	      }
      }
	}
	return best_student;
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

  auto students = std::vector<student>{};
  student best_student = student();

  auto student1 = student{"Jan", "Kowalski", {2.5, 4.0, 3.5}};
  students.push_back(student1);
  print_student(student1);

  student1  = student{"Piotr", "Nowak", {3.5, 4, 5, 3, 4.5, 5}};
  students.push_back(student1);
  print_student(student1);

  student1  = student{"Ewa", "Patyk", {2, 4.5, 5, 3.5, 5}};
  students.push_back(student1);
  print_student(student1);

  student1  = student{"Ala", "Kamyk", {}};
  students.push_back(student1);
  print_student(student1);
  std::cout << "\n";

  best_student = get_best_student(students);
  std::cout << "Najlepszy student: " ;
  print_student(best_student);

  return 0;
}
