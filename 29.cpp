// Write a c++ program to find the factorial of a given number using a for loop.
#include <iostream>
using namespace std;

int main()
{
    int n;
    long long fact = 1;
    cout << "Enter a number to get its factorial " << endl;
    cin >> n;
    if (n < 0)
    {
        cout << "Can't get factorial of a negative number " << endl;
    }
    else if (n == 0)
    {
        cout << "The factorial of 0 is : 1" << endl;
    }
    else
    {
        for (int i = n; i >= 1; i--)
        {
            fact *= i;
        }
        cout << "The factorial of " << n << " is : " << fact << endl;
    }

    return 0;
}
