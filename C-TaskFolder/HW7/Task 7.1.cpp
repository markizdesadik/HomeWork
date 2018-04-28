#include <iostream>
#include <string>

int main()
{


    std::string str="Proin eget tortor risus.";
    std::string str2;
    int num;
    std::cin >> num;
    std::cout << std::endl;
    for (int i=0; i<str.size(); ++i){
        if(i==num-1){
            continue;
        }
        str2 += str[i];
    }
    std::cout << str << std::endl;
    std::cout << str2 << std::endl;

    return 0;
}
