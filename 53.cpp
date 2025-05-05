// Write a program to convert a binary number to a decimal number using a while loop
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int binary_number;
    cout << "Enter a binary number" << endl;
    cin >> binary_number;
    int copy = binary_number;
    while (copy != 0)
    {
        int rem = copy % 10;
        if (rem >= 0 && rem <= 1)
        {
        }
        else
        {
            cout << "Wrong input" << endl;
            exit(1);
        }
        copy /= 10;
    }
    int i = 0;
    int decimal = 0;
    while (binary_number != 0)
    {
        int rem = binary_number % 10;
        decimal += pow(2, i) * rem;
        i++;
        binary_number /= 10;
    }

    cout << "The decimal form is : " << decimal << endl;
    return 0;
}
