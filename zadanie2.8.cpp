#include <iostream>
#include <iomanip>  //bibl. potrzebna do wyswietlania liczb zmiennoprzecink. z odp. precyzja
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

   auto add_student_to_group(group& gr, student st) -> void
   {
     gr.students.push_back(st);

     return;
   }

     auto bubble_sort(std::vector<double>& vec) -> void
    {
        auto changes_were_made = true;
        for (auto j = 0; j < vec.size() && changes_were_made; j++) {
           auto changes_were_made = false;
           for (auto i = 0; i < vec.size()-1; i++) {
             if (vec[i] > vec[i + 1]) {
                auto tmp = vec[i];
                vec[i] = vec[i+ 1];
                vec[i+1] = tmp;
                changes_were_made = true;
             }
           }
        }
     }

   auto median_of(group gr) -> double
     {
       auto median = 0.0;
       auto avgs = std::vector<double>{};
       for (student st : gr.students) {
            avgs.push_back(average_of(st));
           }
       bubble_sort(avgs);
       if (avgs.size()% 2 == 0) {
         median = (avgs[avgs.size()/2 -1] + avgs[avgs.size()/2])/2;
       } else {median = avgs[avgs.size()/2] ;
         }
       return median;
     }

  auto best_groups_name(std::vector<group> vecgr) -> std::string
   {
    auto mediana = 0.0;
    auto name = std::string();
    auto max = 0.0;
    for (group grupa : vecgr) {
         mediana = median_of(grupa);
         if (mediana > max) {
             max = mediana;
             name = grupa.name;
         }
     }
    return name;
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
        std::cout << " srednia ocen: " << average_of(st) << "\n";
     }

    auto print_group(group grupa) -> void {
       std::cout << grupa.name << "   Liczba studentow: " << grupa.students.size();
       std::cout << "    Mediana srednich ocen:" << median_of(grupa) << "\n";
       for (student st : grupa.students) {
          print_student(st);
       }
       std::cout << "\n";
     }

auto main() -> int
  {
  std::cout << std::setprecision(3);      //wyswietlanie liczb do 2 miejsc po przecinku

  auto students = std::vector<student>{};
  auto groups = std::vector<group>{};

  auto grupa = group{"GRUPA 1", students};
  auto student1 = student{"Jan", "Kowalski", {2.5, 4.0, 3.5}};
  add_student_to_group(grupa, student1);
  student1  = student{"Piotr", "Nowak", {3.5, 4, 5, 3, 4.5, 5}};
  add_student_to_group(grupa, student1);
  student1  = student{"Ewa", "Patyk", {2, 4.5, 5, 3.5, 5}};
  add_student_to_group(grupa, student1);
  student1 = student{"Ala", "Kamyk", {}};
  add_student_to_group(grupa, student1);
  groups.push_back(grupa);

  grupa = group{"GRUPA 2", students};
  student1 = student{"Adam", "Kowal", {5, 4, 3.5}};
  add_student_to_group(grupa, student1);
  student1 = student{"Piotr", "Nowak", {3.5, 5, 3.5, 4, 5}};
  add_student_to_group(grupa, student1);
  student1  = student{"Ewa", "Patyk", {2, 4, 5, 3.5, 5}};
  add_student_to_group(grupa, student1);
  student1 = student{"Ala", "Kamyk", {}};
  add_student_to_group(grupa, student1);
  groups.push_back(grupa);

  grupa = group{"GRUPA 3", students};
  student1 = student{"Anna", "Wiosna", {3.5, 5, 2, 2.5}};
  add_student_to_group(grupa, student1);
  student1 = student{"Pawel", "Kot", {3.5, 4, 5, 3, 4.5, 5}};
  add_student_to_group(grupa, student1);
  student1  = student{"Maria", "Srebrna", {2, 4.5, 5, 3.5, 5}};
  add_student_to_group(grupa, student1);
  student1 = student{"Daniel", "Baran", {}};
  add_student_to_group(grupa, student1);
  student1 = student{"Fred", "Kiepski", {}};
  add_student_to_group(grupa, student1);
  groups.push_back(grupa);

  for (group grupa : groups) {
     print_group(grupa);
   }
  std::cout << "Najlepsza grupa: " << best_groups_name(groups) << "\n";
  return 0;
}
