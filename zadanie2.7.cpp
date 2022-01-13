#include <iostream>
#include <string>
#include <vector>

struct student {
  std::string name;
  std::string surname;
  std::vector<double> grades;
 };

 struct group {
   std::string name;
   std::vector<student> students;
   };

   auto add_student_to_group(group& gr, student st) -> void
   {
     gr.students.push_back(st);
     return;
   }

    auto print(std::vector<double> vec) -> void {
      for (auto element : vec) {
        std::cout << element << "  ";
        }
    }

    auto print_student(student st) -> void {
        std::cout << st.name << " " << st.surname << " - oceny: ";
        if (st.grades.size() > 0) {
                print(st.grades);
       } else {
            std::cout << " brak ";
       }
        std::cout << "\n";
    }

  auto main() -> int
{
  auto students = std::vector<student>{};
  auto grupa1 = group{"GRUPA 1", students};
  auto student1 = student{"Jan", "Kowalski", {2.5, 4.0, 3.5}};
  add_student_to_group(grupa1, student1);
  student1  = student{"Piotr", "Nowak", {3.5, 4, 5, 3, 4.5, 5}};
  add_student_to_group(grupa1, student1);
  student1  = student{"Ewa", "Patyk", {2, 4.5, 5, 3.5, 5}};
  add_student_to_group(grupa1, student1);
  student1  = student{"Ala", "Kamyk", {}};
  add_student_to_group(grupa1, student1);

  std::cout << grupa1.name << "   Liczba studentow: " << grupa1.students.size() <<"\n";
  for (student st : grupa1.students) {
    print_student(st);
  }
  std::cout << "\n";
  std::cout << "Nowy student: \n" ;
  student1 = student{"", "", {}};
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
  add_student_to_group(grupa1, student1);
  print_student(student1);

  std::cout << "\n";
  std::cout << grupa1.name << "  Liczba studentow: " << grupa1.students.size() << "\n";
  for (student st : grupa1.students) {
    print_student(st);
  }
  return 0;
}
