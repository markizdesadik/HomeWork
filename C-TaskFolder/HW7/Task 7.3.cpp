#include <iostream>
#include <string>

int main()
{


    std::string str="Proin eget tortor risus.";
    std::string str2;
    char ch;
    int num;
    std::cin >> num;
    std::cin >> ch;
    std::cout << std::endl;
    for (int i=0; i<str.size(); ++i){
        if(i== num-1){
                str2 += ch;
                str2 += str[i];
            continue;
        }
        str2 += str[i];
    }
    std::cout << str << std::endl;
    std::cout << str2 << std::endl;

    return 0;
}
