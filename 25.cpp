// Write a c++ program to demonstrate the use of C-style casting by converting an int to a double.
#include <iostream>
using namespace std;

int main()
{
    int num = 6;
    cout << "Integer value of num before typecasting : " << num << endl;
    double to_Double = (double)num;
    cout << "Double value of num after typecasting : " << to_Double << endl;
    return 0;
}
