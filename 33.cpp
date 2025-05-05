// Write a c++ program to count the number of digits in a given number using a while loop

#include <iostream>
using namespace std;

int main()
{
    int num;

    cout << "Enter a number to calculate its number of digits " << endl;
    cin >> num;
    int copy = num;
    int i = 0;
    while (num != 0)
    {
        num /= 10;
        i++;
    }
    cout << "The number of digits in " << copy << " are : " << i << endl;
    return 0;
}
