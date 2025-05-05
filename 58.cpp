// Write a program to print a pyramid pattern using nested for loops

#include <iostream>
using namespace std;
int main()
{
    char x = '*';
    int n;
    cout << "Enter the number of rows" << endl;
    cin >> n;
    int times = n;
    for (int i = 1; i <= times; i++)
    {
        for (int j = 0; j < (n - 1); j++)
        {
            cout << " ";
        }
        n--;
        for (int k = 0; k < i; k++)
        {
            cout << x << " ";
        }
        cout << endl;
    }
    return 0;
}
