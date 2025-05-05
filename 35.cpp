// Write a program to find the largest number in an array using a for loop
#include <iostream>
using namespace std;

int main()
{
    int arr[7] = {1, 85, 64, 3, 7, 45, 5};
    int size = sizeof(arr) / sizeof(int);
    int max = 0;
    for (int i = 0; i < size; i++)
    {
        if (max < arr[i])
        {
            max = arr[i];
        }
    }
    cout << "The largest number in the given array is : " << max << endl;
    return 0;
}
