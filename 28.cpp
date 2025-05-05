// Write a program to prpint the multiplication table of a given number suing a do-while loop.
#include <iostream>
using namespace std;

int main()
{
    int num;
    cout << "Enter a number to print its multiplication number " << endl;
    cin >> num;
    int i = 1;
    do
    {
        cout << num << " x " << i << " = " << num * i << endl;
        i++;

    } while (i <= 10);
    return 0;
}
