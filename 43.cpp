// Write a program to print first N even numbers using for loop
#include <iostream>
using namespace std;

int main()
{
    int N;
    cout << "Enter a number " << endl;
    cin >> N;
    int x = 0;
    for (int i = 1; x != N; i++)
    {
        if (i % 2 == 0)
        {
            cout << i << endl;
            x++;
        }
    }
    return 0;
}
