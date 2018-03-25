#include <iostream>
#include <ctime>
#include <cstdlib>
#include <conio.h>

int brosok(int n);

int main()
{
    srand (time(0));

    int Cub1;
    int Cub2;

    int Summ_Br = 0;
    int Summ_Ob = 0;

    char ch;
    std::cout << "Enter y/n :";
    std::cin >> ch;

    int i = 0;

    while(ch == 'y'|| ch == 'Y')
   {
       int Temp = 0;

            i++;

            system("cls");;

        Cub1 = 1 + rand() %6;
        Cub2 = 1 + rand() %6;

        Summ_Br = brosok(Cub1);
        Temp +=Summ_Br;
        Summ_Br = brosok(Cub2);
        Temp +=Summ_Br;

        Summ_Ob +=Temp;

        std::cout << "\n\nVupalo - " << Cub1 << " and " << Cub2 ;
        std::cout << "\nSumma Broska " << i << " - " << Temp << "\n";

        if (i!=5)
        {
            std::cout << "Enter y/n :";
            std::cin >> ch;
        }
        else
        {
            std::cout << "\n\nGame Over\n\n" <<"Your score = " << Summ_Ob << "\n\n";
            break;
        }

   }


return 0;
}

int brosok(int summ)
{
    switch(summ)
    {
        case 1:
            { std::cout << "\n";
                std::cout << "________\n";
                std::cout << "|      |\n";
                std::cout << "|      |\n";
                std::cout << "|  **  |\n";
                std::cout << "|      |\n";
                std::cout << "|      |\n";
                std::cout << "________\n";

            }
            break;
        case 2:
            { std::cout << "\n";
                std::cout << "________\n";
                std::cout << "|    **|\n";
                std::cout << "|      |\n";
                std::cout << "|      |\n";
                std::cout << "|      |\n";
                std::cout << "|**    |\n";
                std::cout << "________\n";

            }
            break;
        case 3:
            { std::cout << "\n";
                std::cout << "________\n";
                std::cout << "|    **|\n";
                std::cout << "|      |\n";
                std::cout << "|  **  |\n";
                std::cout << "|      |\n";
                std::cout << "|**    |\n";
                std::cout << "________\n";

            }
            break;
        case 4:
            { std::cout << "\n";
                std::cout << "________\n";
                std::cout << "|**  **|\n";
                std::cout << "|      |\n";
                std::cout << "|      |\n";
                std::cout << "|      |\n";
                std::cout << "|**  **|\n";
                std::cout << "________\n";

            }
            break;
        case 5:
            { std::cout << "\n";
                std::cout << "________\n";
                std::cout << "|**  **|\n";
                std::cout << "|      |\n";
                std::cout << "|  **  |\n";
                std::cout << "|      |\n";
                std::cout << "|**  **|\n";
                std::cout << "________\n";

            }
            break;
        case 6:
            { std::cout << "\n";
                std::cout << "________\n";
                std::cout << "|**  **|\n";
                std::cout << "|      |\n";
                std::cout << "|**  **|\n";
                std::cout << "|      |\n";
                std::cout << "|**  **|\n";
                std::cout << "________\n";

            }
            break;
    }

    return summ;
}
