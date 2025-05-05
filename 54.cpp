// Write a program to print all prime numbers between two given numbers using a for loop
#include <iostream>
using namespace std;
int main()
{
    int lower_range, upper_range;
x:
    cout << "Enter the lower range" << endl;
    cin >> lower_range;
    cout << "Enter the upper range" << endl;
    cin >> upper_range;
    if (upper_range > lower_range)
    {
    }
    else
    {
        cout << "Wrong input" << endl;
        goto x;
    }

    for (int i = (lower_range + 1); i < upper_range; i++)
    {
        bool q = 0;
        for (int j = 2; j < i; j++)
        {
            if (i % j == 0)
            {
                q = 1;
                break;
            }
        }
        if (q == 0)
        {
            cout << i << endl;
        }
    }

    return 0;
}
