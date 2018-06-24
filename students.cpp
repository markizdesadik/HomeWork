#include <iostream>
#include <string>
#include <ctime>
#include <random>

struct Student
{
    std::string Name;
    int group;
    Student *Next;
    void Input(Student &student, std::string, int);

};

void Student::Input(Student &student, std::string str, int num)
{
    Name = str;
    group = num;
}

class List
{
    Student *Head;
public:
    List():Head(nullptr){};
    ~List();
    void Add(std::string, int);
    void Show_All();
    void Show_in_Group(int);
};

List::~List()
{
    while (Head){
        Student *temp = Head->Next;
        std::cout << Head->Name << " delete\n";
        delete Head;
        Head = temp;
    }
}


void List::Add(std::string str, int num)
{
     Student student;
     student.Input(student, str, num);
     Student *temp = new Student;

        temp->Next = Head;
        temp->Name = student.Name;
        temp->group = student.group;

     Head = temp;
}

void List::Show_All()
{
     Student *temp = Head;
     while (temp){
         std::cout << temp->Name << " in group " << temp->group << std::endl;
         temp = temp->Next;
     }
     std::cout << std::endl;
}

void List::Show_in_Group(int num)
{
     Student *temp = Head;
     std::cout << "In group " << num << " students: " << std::endl;
     while (temp){
            if (temp->group == num){
                 std::cout << temp->Name << std::endl;
             }
             temp = temp->Next;
     }
     std::cout << std::endl;
}

int main ()
{
  //  srand(time(0));

    List lst;
  //  spis{"Vasil", "Olga", "Pasha", "Slava", "Denis", "Konstant", "Dmitriy", "Port", "Ivan", "Sveta"};

    //for (int i=0; i<7; ++i){
    //        int f = 0 + rand()% 7;
   //     lst.Add(spis[f], 1 + rand()% 3);
   // }
    lst.Add("Vasil", 1);
    lst.Add("Olga", 3);
    lst.Add("Denis", 1);
    lst.Add("Vika", 3);
    lst.Add("Slava", 2);
    lst.Add("Kostya", 2);


    std::cout << std::endl;
    lst.Show_All();
    lst.Show_in_Group(3);


    return 0;
}
