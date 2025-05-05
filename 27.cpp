// Write a c++ program to calculate the sum of the first 50 natural numbers using a while loop.

#include <iostream>
using namespace std;
int main()
{

    int i = 1;
    int sum = 0;
    while (i <= 50)
    {
        sum += i;
        i++;
    }
    cout << "The sum of first 50 natural number is : " << sum << endl;
    return 0;
}
