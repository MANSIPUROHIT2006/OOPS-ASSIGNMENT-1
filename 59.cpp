// Write a cpp program to find the LCM(least common multiple) of two numbers using a while loop

#include <iostream>
using namespace std;

int main()
{
    int x, y;
    cout << "Enter a number" << endl;
    cin >> x;
    cout << "Enter another number" << endl;
    cin >> y;
    int x1 = x, y1 = y, greater, smaller;
    if (x <= 0 || y <= 0)
    {
        cout << "Wrong input" << endl;
        exit(1);
    }
    if (x > y)
    {
        greater = x;
        smaller = y;
    }
    else
    {
        greater = y;
        smaller = x;
    }

    int lcm = greater;
    while (true)
    {
        if (lcm % smaller == 0)
        {

            cout << "The LCM is : " << lcm << endl;
            break;
        }
        else
        {
            lcm += greater;
        }
    }
    return 0;
}
