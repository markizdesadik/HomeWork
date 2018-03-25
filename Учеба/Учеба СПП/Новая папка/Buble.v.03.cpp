#include <iostream>
#include <ctime>
#include <cstdlib>

int main()
{
    srand (time(0));
    int n;
    int *Mass_A;

    std::cout << "Enter number of elements : ";
    std::cin >> n;

    Mass_A = new int[n];
    std::cout << "\n\nYour Array :\n\n";
    for (int i=0; i<n; i++)
    {
        Mass_A[i]= rand()% 11;
        std::cout << *(Mass_A + i) << " ";
    }

    bool Probeg = true;
    int k =0;
    int Min_Temp;

    std::cout << "\n++++++++++++++++++++++\n\n";

    while (Probeg)
    {
        k++;
        Probeg = false;
        std::cout << k << " step - ";
        for (int i=0; i<n; i++)
        {
             std::cout << *(Mass_A + i) << " ";
        }

        std::cout << "\n\n++++++++++++++++++++++\n\n";

        for (int j=0; j<n-k; j++)
        {
            if (Mass_A[j] > Mass_A[j+1])
            {
                Min_Temp = Mass_A[j];
                Mass_A[j] = Mass_A[j+1];
                Mass_A[j+1] = Min_Temp;

                Probeg = true;
            }
        }
    }

    std::cout << "Your array sorted : " << " ";
    for (int i=0; i<n; i++)
    {
         std::cout << *(Mass_A + i) << " ";
    }

    delete [] Mass_A;

return 0;
}
