// Write a c++ program to check whether a given number is a prime number using a for loop.
#include <iostream>
using namespace std;
int main()
{
    cout << "Enter a number to check whether it is prime or not" << endl;
    int n;
    cin >> n;
    bool x = 0;
    if (n <= 0)
    {
        cout << "Wrong input!!" << endl;
        exit(1);
    }
    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            x = 1;
            break;
        }
    }
    if (x == 1)
    {
        cout << n << " is not a prime number!" << endl;
    }
    else
    {
        cout << n << " is a prime number!" << endl;
    }
    return 0;
}
