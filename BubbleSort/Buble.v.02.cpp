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

    int Min_Temp;

    std::cout << "\n++++++++++++++++++++++\n\n";

    for (int i=0; i<n-1 ; i++)
    {
        std::cout << i+1 << " step - ";
        for (int k=0; k<n; k++)
        {
             std::cout << *(Mass_A + k) << " ";
        }

        std::cout << "\n\n++++++++++++++++++++++\n\n";

        for (int j=0; j<n-i-1; j++)
        {
            if (Mass_A[j] > Mass_A[j+1])
            {
                Min_Temp = Mass_A[j];
                Mass_A[j]=Mass_A[j+1];
                Mass_A[j+1] = Min_Temp;
            }
        }
    }

    std::cout << "Your array sorted : " << " ";
    for (int k=0; k<n; k++)
    {
         std::cout << *(Mass_A + k) << " ";
    }

    delete [] Mass_A;

return 0;
}
