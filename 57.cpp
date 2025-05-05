// Write a program to find duplicate elements in an array using nested for loops
#include <iostream>
using namespace std;
int main()
{
    int arr[10] = {1, 5, 7, 3, 4, 1, 2, 2, 7, 8};

    int size = sizeof(arr) / sizeof(int);
    for (int i = 0; i < size; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            if (arr[i] == arr[j])
            {
                cout << arr[i] << endl;
                break;
            }
        }
    }
    return 0;
}
