#include <iostream>
#include <ctime>
#include <cstdlib>


int brosok(int n);
int generic_broska(int i);

int main()
{
    srand (time(0));
    int Gamer = 0;
    int Comp = 0;

    int i = 0;

    while (i < 5)
    {
        std::cout << "\n\n++++++++++=== : " << i+1 << " : ===++++++++++\n\n";
        int GamerTemp = 0;
        int CompTemp = 0;
    GamerTemp = generic_broska(i);
    Gamer += GamerTemp;
    CompTemp = generic_broska(i);
    Comp += CompTemp;
        i++;

    }

            std::cout << "\n\nGamer : " << Gamer << "\n";

                        std::cout << "\n\nGamer sredn : " << (float)Gamer / 5 << "\n";
            std::cout << "\n\nComp : " << Comp << "\n";

                        std::cout << "\n\nComp sredn : " << (float)Comp / 5 << "\n";

return 0;
}

int generic_broska(int i)
{
    int Cub1;
    int Cub2;

    int Summ_Br = 0;
    int Summ_Ob = 0;

//        system("cls");;

        Cub1 = 1 + rand() %6;
        Cub2 = 1 + rand() %6;

        Summ_Br = brosok(Cub1);
        Summ_Ob +=Summ_Br;
        Summ_Br = brosok(Cub2);
        Summ_Ob +=Summ_Br;

        std::cout << "\n\nVupalo - " << Cub1 << " and " << Cub2 ;
        std::cout << "\nSumma " << i+1 << " Broska  - " << Summ_Ob << "\n";

    return Summ_Ob;
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
