// Write a c++ program to print a pattern using anested for loops
#include <iostream>
using namespace std;
int main()
{
    cout << "Enter the number of rows " << endl;
    int rows;
    cin >> rows;
    char x = '*';
    for (int i = 1; i <= rows; i++)
    {
        for (int j = 0; j < i; j++)
        {
            cout << x << " ";
        }
        cout << endl;
    }
    return 0;
}
