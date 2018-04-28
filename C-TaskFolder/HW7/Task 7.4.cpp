#include <iostream>
#include <string>

int main()
{


    std::string str="Proin. eget.. tortor risus.";
    std::string str2;
    char ch = '.';
    char ch2 = '!';
    std::cout << std::endl;
    for (int i=0; i<str.size(); ++i){
        if(str[i]==ch){
                str2 += ch2;
            continue;
        }
        str2 += str[i];
    }
    std::cout << str << std::endl;
    std::cout << str2 << std::endl;

    return 0;
}
