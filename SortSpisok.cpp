#include <iostream>
#include <ctime>
#include <cstdlib>



int Num;
int b=0, c=0;
int getNum(int randNum, int buk, int cow);
int BukCow(int UserNum, int GameNum);

int main()
{
    srand(time(0));
int randNum = 999 + rand() % 9000;
//    int randNum = 9 + rand() % 90;


        std::cout << "randNum : " << randNum << "\n\n";
        std::cout << "You WIN! Your num : " << getNum(randNum, b, c) << "\n\n";

return 0;
}

int getNum(int randNum, int buk, int cow)
{
     std::cout << "BUK: " << buk << " COW: " << cow << "\n";
    std::cout << "enter num : "; std::cin >> Num ;
    std::cout << "\n";
    if (Num == randNum)
    {
        return Num;
    }
    else return BukCow(Num, randNum);

}

int BukCow(int UserNum, int GameNum)
{
    int GameMas[4];
    int UserMas[4];
    int buk=0;
    int cow=0;
    int tEmp=GameNum;
    for (int i=0, k=1000; i<4; ++i, k/=10)
    {
        UserMas[i]=UserNum/k; UserNum=UserNum%k;
        GameMas[i]=tEmp/k; tEmp=tEmp%k;
        if (UserMas[i]==GameMas[i]) buk++;
      std::cout << " " << buk << " U " << UserMas[i] << "  G" << GameMas[i] << "\n";
    }
    for (int i=0; i<4; ++i)
    {
        for (int j=0; j<4; ++j)
        {
            if (UserMas[i]==GameMas[j]) cow++;
//            std::cout << " " << cow << " U " << UserMas[i] << "  G" << GameMas[j] << "\n";
        }
    }
    return getNum(GameNum, buk, cow);
}





//int nodCalc(int Min, int Max, int* simpleNums, int res=1, int Count=1)
//{
//    int currentSimpleNumber = simpleNums[Count];
//
//    if (Count < simpleNums[0] && Min>=simpleNums[Count])
//    {
//        if (Min%currentSimpleNumber == 0 && Max%currentSimpleNumber == 0)
//        {
//            res *= currentSimpleNumber;
//            nodCalc(Min/currentSimpleNumber, Max/currentSimpleNumber, simpleNums, res, Count);
//        }
//        else
//        {
//            nodCalc(Min, Max, simpleNums, res, ++Count);
//        }
//    }
//    return res;
//}
