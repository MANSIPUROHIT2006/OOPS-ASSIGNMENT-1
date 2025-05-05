// Write a program to print all the prime numbers between 1 and 100 using a for loop

#include <iostream>
using namespace std;
int main()
{
    for (int i = 2; i < 100; i++)
    {
        bool x = 0;
        for (int j = 2; j < i; j++)
        {
            if (i % j == 0)
            {
                x = 1;
                break;
            }
              }
        if (x == 0)
        {
            cout << i << endl;
        }
    }
    return 0;
}
