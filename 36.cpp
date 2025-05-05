// Write a program to print elements of an array in reverse order using for loop
#include <iostream>
using namespace std;
int main()
{
    int arr[5] = {1, 2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(int);
    for (int i = (size - 1); i >= 0; i--)
    {
        cout << arr[i] << endl;
    }
    return 0;
}
