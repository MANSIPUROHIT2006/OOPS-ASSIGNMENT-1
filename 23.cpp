// Write a c++ program to demonstrate the use of const_cast by modifying a constant variable.

#include <iostream>
using namespace std;

int main()
{
    const int n = 50;
    cout << "Value of n before using const_cast : " << n << endl;
    int *nonConst = const_cast<int *>(&n);
    *nonConst = 100;
    cout << endl;
    cout << "Value of n after using const_cast : " << n << endl;
    return 0;
}
