// Write a c++ program to demonstrate the use of reinterpret_cast to convert an int to a char.
#include <iostream>
using namespace std;
int main()
{
    int x = 66;
    cout << "Integer value of x : " << x << endl;
    char x_To_Char = reinterpret_cast<char &>(x);
    cout << "Character value of x after the use of reinterpret_cast : " << x_To_Char << endl;
    return 0;
}
