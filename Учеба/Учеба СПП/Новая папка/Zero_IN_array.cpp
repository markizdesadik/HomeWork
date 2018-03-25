#include <iostream>
#include <ctime>
#include <cstdlib>



int main()
{
    srand (time(0));

    int Mass[3][4];
    int n=0;

    for (int i=0; i<3; i++)
    {
        for (int j=0, k=1; j<4; j++, k++)
        {
            Mass[i][j] = rand()%6;
            std::cout << Mass[i][j] << " ";

            if (k == 4) std::cout << "\n";
            if (Mass[i][j]==0) n++;
        }
    }

    std::cout << "\nIn array have - " << n << " digit '0'\n";


return 0;
}
