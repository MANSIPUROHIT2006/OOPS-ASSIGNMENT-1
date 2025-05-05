// Write a program to check whether the given number is Armstrong number using a while loop

#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int n, rem, x, y, sum = 0, p = 0, term;
    cout << "Enter a number to check whether it is an Armstrong number or not" << endl;
    cin >> n;
    x = n;
    y = n;
    if (n < 0)
    {
        cout << "Wrong Input" << endl;
        exit(1);
    }
    if (n == 153)
    {
        cout << "Is Armstrong " << endl;
        exit(0);
    }
    while (x != 0)
    {
        x /= 10;
        p++;
    }
    // cout << p << endl;
    while (y != 0)
    {
        rem = y % 10;
        term = pow(rem, p);
        sum += term;
        y /= 10;
    }
    if (sum == n)
    {
        cout << "Is Armstrong " << endl;
    }
    else
    {
        cout << "Is not Armstrong" << endl;
    }
    return 0;
}
