#include <iostream>
#include <cstdlib>
#include <iomanip>

const int SIZE_BOARD=5;
const int FinishHim = 500;

int HorseStep_X[8] = {  2,  1, -1, -2, -2, -1,  1,  2};
int HorseStep_Y[8] = { -1, -2, -2,  1, -1,  2,  2,  1};

bool MoveImPossible(int Deck[][SIZE_BOARD], int X,int Y)
{
    if (X<0 || Y<0 || X>SIZE_BOARD-1 || Y>SIZE_BOARD-1 ) return true;
        if (Deck[X][Y] == FinishHim) return false;
            if (Deck[X][Y] != 0) return true;
}

bool True_Posytion(int point)
{
    if (point<0 || point>SIZE_BOARD-1) {
            std::cout << "\nIncorrect. Your choice goes beyond the size of the board! Reenter your chose.\n";
            return true;
    }
    return false;
}


void DispleyHorseSteps(int Deck[][SIZE_BOARD]);

int HorseMove(int Deck[][SIZE_BOARD], int step)
{
    for (int i=0; i<SIZE_BOARD; ++i){
        for (int j=0; j<SIZE_BOARD; ++j){
            if (Deck[i][j]==step){
                for (int m=0; m<8; ++m){
                    int posX = i + HorseStep_X[m];
                    int posY = j + HorseStep_Y[m];
                    if (MoveImPossible(Deck, posX, posY)) continue;
                    if (Deck[posX][posY] == FinishHim) {DispleyHorseSteps(Deck); return step; }
                    else Deck[posX][posY] = step +1;
                }
            }
        }
    }
    HorseMove(Deck, step+1);
}

int main()
{
    int pointSX;
    int pointSY;
        int pointFX;
    int pointFY;
    bool board = true;

    do{
        std::cout << "Enter from 1 to " << SIZE_BOARD << " START VERTICAL position : "; std::cin >> pointSX;
        std::cout << "Enter from 1 to " << SIZE_BOARD << " START HORIZONT position : "; std::cin >> pointSY;
        std::cout << "Enter from 1 to " << SIZE_BOARD << " FINISH HORIZONT position : "; std::cin >> pointFX;
        std::cout << "Enter from 1 to " << SIZE_BOARD << " FINISH VERTICAL position : "; std::cin >> pointFY;
        if (True_Posytion(pointSX) || True_Posytion(pointSY) || True_Posytion(pointFX) || True_Posytion(pointFY)) {
                board = true;

        }
        else board = false;
        std::cout << '\n';}
    while(board);
        std::cout << "\nYour choise start position : " << pointSX << '*' << pointSY << std::endl;
        std::cout << "\nYour choise finish position : " << pointFY << '*' << pointFY << std::endl;

    int Deck[SIZE_BOARD][SIZE_BOARD] ={};
    Deck[pointSX-1][pointSY-1] = 1;
    Deck[pointFX-1][pointFY-1]=FinishHim;
    std::cout << "Iz to4ki " << pointSX <<'*'<< pointSY << " v to4ky " << pointFX << '*' << pointFY << " - " << HorseMove(Deck, 1) << " xodov";
    return 0;
}
void DispleyHorseSteps(int Deck[][SIZE_BOARD])
{
    for (int i=0; i<SIZE_BOARD; ++i){
        std::cout << "-----";
    }
    std::cout << '\n';
    for (int i=0; i<SIZE_BOARD; ++i){
        for (int j=0; j<SIZE_BOARD; ++j){
            std::cout << std::setw(3) << Deck[i][j] << " |";
        }
        std::cout << '\n';
        for (int i=0; i<SIZE_BOARD; ++i){
            std::cout << "-----";
        }
        std::cout << '\n';
    }
}
