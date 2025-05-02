// Write a program to demostrate the use of static_cast by converting an int to a double and vica versa
#include <iostream>
using namespace std;

int main()
{
    int IntVal = 3;
    double DoubleVal = 67.345333;

    double converted_Int = static_cast<double>(IntVal);

    int converted_Double = static_cast<int>(DoubleVal);

    cout << "Interger value before conversion into double : " << IntVal << endl;
    cout << "Double value before conversion into int : " << DoubleVal << endl;

    cout << endl;

    cout << "Integer value after conversion into double : " << converted_Int << endl;
    cout << "Double value after conversion into int : " << converted_Double << endl;

    return 0;
}
