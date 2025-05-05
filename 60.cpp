// Write a program to generate the fibonacci series up to n terms using a for loop
#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the number of terms you want to print " << endl;
    cin >> n;
    if (n < 0)
    {
        cout << "Wrong input" << endl;
        exit(1);
    }
    int n1 = 0, n2 = 1;
    cout << "The Fibonacci series till " << n << "th term are as follows : " << endl;
    cout << n1 << " " << n2 << " ";
    for (int i = 2; i <= n; i++)
    {
        int sum = n1 + n2;
        cout << sum << " ";
        n1 = n2;
        n2 = sum;
    }
    return 0;
}
