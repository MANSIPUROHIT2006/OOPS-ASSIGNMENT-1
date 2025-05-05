// Write a c++ program to print fibonacci series up to a given number of terms using a for loop.

#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the number of terms upto which you want to print the fibonacci series" << endl;
    cin >> n;
    int n1 = 0, n2 = 1;
    cout << "The fibonacci series till " << n << "th term is as follows : " << endl;
    cout << n1 << " " << n2 << " ";
    for (int i = 2; i <= n; i++)
    {
        int term = n1 + n2;
        cout << term << " ";
        n1 = n2;
        n2 = term;
    }
    return 0;
}
