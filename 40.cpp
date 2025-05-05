// Write a c++ program to find the sum of the digits of a given number using a while loop
#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter a number to calculate the sum of its digits" << endl;
    cin >> n;
    int sum = 0;
    while (n != 0)
    {
        int rem = n % 10;
        sum += rem;
        n /= 10;
    }
    cout << "The sum is : " << sum << endl;
    return 0;
}
