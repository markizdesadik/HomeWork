#include <iostream>
#include <string>
#include <algorithm>
#include <vector>

struct Student
{
    std::string Name;
    int group;
    Student *Next;
    void Input(Student, std::string, int);

};

void Student::Input(Student student, std::string str, int num)
{
    Name = str;
    group = num;
}

class List
{
    std::vector<Student> spis;
public:
    List(){};
    ~List();
    void Add(std::string, int);
    void Show_All();
    void Show_in_Group(int);
    void Sort_List();
};

List::~List(){
        std::cout << "deleted";
        spis.clear();
}


void List::Add(std::string str, int num){
     Student student;
     student.Input(student, str, num);

     spis.push_back(student);
}

void List::Show_All(){
    for (Student c: spis){
        std::cout << c.Name << " in group " << c.group << std::endl;
    }
}

void List::Show_in_Group(int num){
    std::cout << std::endl;
    std::cout << "In group " << num <<  " students: " << std::endl;
    for (Student c: spis){
        if (c.group == num){
            std::cout << c.Name << std::endl;
        }
    }
}

void List::Sort_List(){
  //  for (Student c : spis){
  //      if (std::lexicographical_compare(c.Name.begin(), c.Name.end(),
  //                                       c.Next->Name.begin(), c.Next->Name.end())){
  //           Student tmp = c;
   //          c = c.Next;
  //           c->Next = tmp;
  //       }
//
  //  }
    std::sort(spis.begin(), spis.end());
}


int main ()
{
    List lst;


    lst.Add("Vasil", 1);
    lst.Add("Olga", 3);
    lst.Add("Denis", 1);
    lst.Add("Vika", 3);
    lst.Add("Slava", 2);
    lst.Add("Kostya", 2);

    lst.Show_All();
    lst.Sort_List();
    lst.Show_All();
    lst.Show_in_Group(3);

    std::cout << std::endl;


    return 0;
}
