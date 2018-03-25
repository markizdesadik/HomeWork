#include <iostream>
#include <ctime>
#include <cstdlib>


void SystemMin(int num, int sys, int digit);
void SystemMax(int num, int sys, int digit);

int main()
{
    srand (time(0));

    int Numb;
    int SysN;
    char ch = 'y';

    while (ch == 'y' || ch == 'Y')
    {
        std::cout << "\n\nEnter N : ";
        std::cin >> Numb;
        std::cout << "Enter SysN 2-35 : ";
        std::cin >> SysN;

        if (SysN == 0 || SysN == 1)
            std::cout << "\nIncorect SysN !! \n";
        if (SysN < 10)
            SystemMin(Numb, SysN, Numb);
        if (SysN == 10)
            std::cout << "\n" <<SysN;
        if (SysN > 10 && SysN < 36)
            SystemMax(Numb, SysN, Numb);
        if (SysN >= 36)
            std::cout << "\nIncorect SysN !! \n";

        std::cout << "\n\nYour want repeat  Y/N? ";
        std::cin >> ch;
    }


return 0;
}

void SystemMin(int Numb, int SysN, int Digit)
{
    bool Proverka = true;
    int i=1;
    int *Mass;

    Mass = new int[10];
    while (Proverka)
    {
        Mass[i]=Numb%SysN;
        i++;
        Numb /= SysN;
        if (Numb == 0) Proverka = false;
    }

    std::cout << "\nNumber - " << Digit << " in " << SysN << " system = ";
    for (int k=i-1; k>0; k-- )
    {
            std::cout << Mass[k];

    }
    delete [] Mass;
}

void SystemMax(int Numb, int SysN, int Digit)
{
    bool Proverka = true;
    int i=1;
    char *Mass;

    Mass = new char[10];
    while (Proverka)
    {
        Mass[i]=Numb%SysN + '0';
        if (Numb%SysN > 10)
        {
            switch(Numb%SysN)
            {
                case 10: Mass[i] = 'A'; break;
                case 11: Mass[i] = 'B'; break;
                case 12: Mass[i] = 'C'; break;
                case 13: Mass[i] = 'D'; break;
                case 14: Mass[i] = 'E'; break;
                case 15: Mass[i] = 'F'; break;
                case 16: Mass[i] = 'G'; break;
                case 17: Mass[i] = 'H'; break;
                case 18: Mass[i] = 'I'; break;
                case 19: Mass[i] = 'J'; break;
                case 20: Mass[i] = 'K'; break;
                case 21: Mass[i] = 'L'; break;
                case 22: Mass[i] = 'M'; break;
                case 23: Mass[i] = 'N'; break;
                case 24: Mass[i] = 'O'; break;
                case 25: Mass[i] = 'P'; break;
                case 26: Mass[i] = 'Q'; break;
                case 27: Mass[i] = 'R'; break;
                case 28: Mass[i] = 'S'; break;
                case 29: Mass[i] = 'T'; break;
                case 30: Mass[i] = 'U'; break;
                case 31: Mass[i] = 'V'; break;
                case 32: Mass[i] = 'W'; break;
                case 33: Mass[i] = 'X'; break;
                case 34: Mass[i] = 'Y'; break;
                case 35: Mass[i] = 'Z'; break;
              }
        }

        i++;
        Numb /= SysN;
        if (Numb == 0) Proverka = false;
    }

    std::cout << "\nNymber - " << Digit << " in " << SysN << " system = ";
    for (int k=i-1; k>0; k-- )
    {
        std::cout << Mass[k];
    }
    delete [] Mass;
}
