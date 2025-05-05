// Write a program to convert a decimal number to a binary number using a while loop

#include <iostream>
#include <string>
using namespace std;

int main()
{
    int decimal, remainder;
    string binary = "";

    cout << "Enter a decimal number: ";
    cin >> decimal;

    if (decimal == 0)
    {
        binary = "0";
    }
    else
    {

        while (decimal > 0)
        {
            remainder = decimal % 2;
            binary = to_string(remainder) + binary;
            decimal = decimal / 2;
        }
    }

    cout << "Binary equivalent: " << binary << endl;

    return 0;
}
