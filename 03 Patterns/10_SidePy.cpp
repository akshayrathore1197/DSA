#include <iostream>
using namespace std;

void printUpward(int n)
{
   for (int i = 0; i < n; i++)
    {

        for (int j = 0; j < i+1; j++)
        {

            cout << " * ";
        }
        cout << endl;
    }
}

void printDownward(int n)
{
    for (int i = 0; i < n; i++)
    {

        for (int j = 0; j < n - i-1; j++)
        {

            cout << " * ";
        }
        cout << endl;
    }
}

void printFullPyramid(int x)
{
    printUpward(x);
    printDownward(x);
}

int main()
{
    cout << "Enter the Number : ";
    int n;
    cin >> n;
    printFullPyramid(n);

    return 0;
}
