#include <iostream>
#include <ctime>
#include <cstdlib>


void Array_Compil(int *Array, int n)
{
    void Array_Sort(int *Array1, int *Array2);
    for (int i=0; i<n-1; i++)
    {
        for (int j=i+1; j<n; j++)
        {
            Array_Sort((Array + i), (Array + j));
        }
    }
}

int Array_Enter(int *Array, int n)
{
        for (int i=0; i<n; i++)
    {
        *Array++ = rand()% 11;
    }
}

void Array_Sort(int *Array1, int *Array2)
{
    int Min_Temp;

    if (*Array1 > *Array2)
    {
        Min_Temp = *Array1;
        *Array1 = *Array2;
        *Array2 = Min_Temp;
    }
}

int main()
{
    srand (time(0));
    int n;
    int *Mass_A;

    std::cout << "Enter number of elements : ";
    std::cin >> n;

    Mass_A = new int[n];

    std::cout << "\n\nYour Array :\n\n";
    Array_Enter(Mass_A, n);

    for (int i=0; i<n; i++)
    {
         std::cout << *(Mass_A + i) << " ";
    }

    std::cout << "\n++++++++++++++++++++++\n\n";

    Array_Compil(Mass_A, n);


    std::cout << "Your array sorted : \n" ;
    for (int i=0; i<n; i++)
    {
         std::cout << *(Mass_A + i) << " ";
    }
    std::cout << "\n\n" ;

   delete [] Mass_A;

return 0;
}
