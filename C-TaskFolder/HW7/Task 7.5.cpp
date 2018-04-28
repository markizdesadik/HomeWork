#include <iostream>
#include <string>

int main()
{


    std::string str="Proin. eget.. tortor risus.";
    std::string str2;
    char ch;
    int counter = 0;
    std::cin >> ch;
    std::cout << std::endl;
    for (int i=0; i<str.size(); ++i){
        if(str[i]==ch){
                ++counter;
        }
    }
    std::cout << str << std::endl;
    std::cout << counter << std::endl;

    return 0;
}
