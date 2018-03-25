#include <iostream>
#include <ctime>
#include <cstdlib>


class ArrayList
{
private:
    int Number;
public:
    void addnumb();
    void displey(int k);
    int getnumb();
};

void ArrayList::addnumb()
{
    Number = rand() % 1001;
}

void ArrayList::displey(int k)
{
    std::cout << Number << " ";
    if (k%15 == 0) std::cout << "\n";
}

int ArrayList::getnumb()
{
    return Number;
}

int main()
{
    srand(time(0));

    void Array_Compil(ArrayList** , int);

    int n;

    std::cout << "Enter N: "; std:: cin >> n; std::cout << "\n\n";

    ArrayList* Mass[n];

    for (int i=0; i<n; i++)
    {
        Mass[i] = new ArrayList;
        Mass[i]->addnumb();
    }

    std::cout << "\n\n====================\n\n";

    for (int k=1, i=0; i<n; i++, k++)
    {
        Mass[i]->displey(k);
    }

    std::cout << "\n\n====================\n\n";

    Array_Compil(Mass, n);

    for (int k=1, i=0; i<n; i++, k++)
    {
        Mass[i]->displey(k);
    }
    std::cout << "\n\n====================\n\n";

return 0;
}

void Array_Compil(ArrayList** ItNum, int n)
{
    void Array_Sort(ArrayList** , ArrayList**);
    for (int i=0; i<n-1; i++)
    {
        for (int j=i+1; j<n; j++)
        {
            Array_Sort(ItNum + i , ItNum + j);
        }
    }
}

void Array_Sort(ArrayList** ItNumb1 , ArrayList** ItNumb2)
{
    if ((*ItNumb1)->getnumb() > (*ItNumb2)->getnumb())
    {
        ArrayList* TempSort = *ItNumb1;
        *ItNumb1 = *ItNumb2;
        *ItNumb2 = TempSort;
    }
}
