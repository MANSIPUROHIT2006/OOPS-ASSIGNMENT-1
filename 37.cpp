// WRite a c++ program to calculate the average of numbers in an array using a for loop
#include <iostream>
using namespace std;
int main()
{
    int sum_of_elements = 0;
    int arr[5] = {1, 5, 3, 4, 9};
    int size = sizeof(arr) / sizeof(int);
    for (int i = 0; i < size; i++)
    {
        sum_of_elements += arr[i];
    }
    // cout << sum_of_elements << endl;
    float average = (float)sum_of_elements / size;
    cout << "The average of the given array is : " << average << endl;
    return 0;
}
