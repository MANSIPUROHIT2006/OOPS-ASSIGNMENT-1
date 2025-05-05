// Write a program to check if a given number is a palindrome using a while loop

#include <iostream>
using namespace std;
int main()
{
    cout << "Enter a number to check whether it is palindrome or not" << endl;
    int n;
    cin >> n;
    int copy = n;
    int rev = 0;
    while (copy != 0)
    {
        int rem = copy % 10;
        rev = rev * 10 + rem;
        copy /= 10;
    }
    if (rev == n)
    {
        cout << "Is palindrome" << endl;
    }
    else
    {
        cout << "Is not palindrome" << endl;
    }
    return 0;
}
