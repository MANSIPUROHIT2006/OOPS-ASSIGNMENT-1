// Write a c++ program to find the smallest number in an array using a for loop
#include <iostream>
using namespace std;

int main()
{
    int arr[5] = {56, 8, 3, 65, 10};
    int min = INT8_MAX;
    int size = sizeof(arr) / sizeof(int);
    for (int i = 0; i < size; i++)
    {
        if (arr[i] < min)
        {
            min = arr[i];
        }
    }
    cout << "The smallest value in the given array is : " << min << endl;
    return 0;
}
