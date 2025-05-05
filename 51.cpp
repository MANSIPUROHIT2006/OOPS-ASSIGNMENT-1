// Write a program to find the sum of all even and odd numbers between 1 and 100 using separate for loops.

#include <iostream>
using namespace std;
int main()
{
    int sum_Even = 0, sum_Odd = 0;
    for (int i = 2; i < 100; i += 2)
    {
        sum_Even += i;
    }
    for (int i = 1; i < 100; i += 2)
    {
        sum_Odd += i;
    }
    cout << "The sum of all Even numbers between 1 to 100 is : " << sum_Even << endl;
    cout << "The sum of all Odd numbers between 1 to 100 is : " << sum_Odd << endl;

    return 0;
}
