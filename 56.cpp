// Write a program to calculate the sum of the harmonic series up to n terms using a for loop
#include <iostream>
using namespace std;
int main()
{
    int term;
    cout << "Enter the number of terms" << endl;
    cin >> term;
    double sum = 0;
    for (int i = 1; i <= term; i++)
    {
        double temp = 1.0 / i;
        sum += temp;
    }
    cout << "The sum is : " << sum << endl;
    return 0;
}
