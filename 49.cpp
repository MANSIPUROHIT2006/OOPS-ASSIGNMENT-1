// Write a program to find the sum of all elements in an array using a for loop

#include <iostream>
using namespace std;
int main()
{
    int sum = 0;

    int arr[5] = {1, 85, 3, 7, 91};
    int size = sizeof(arr) / sizeof(int);
    for (int i = 0; i < size; i++)
    {
        sum += arr[i];
    }
    cout << "The sum of all the elements of the given array is : " << sum << endl;
    return 0;
}
