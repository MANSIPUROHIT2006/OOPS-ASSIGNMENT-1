// Write a program to reverse a given string using for loop
#include <iostream>
using namespace std;
int main()
{
    string s = "hello World";

    int start = 0, end = s.length();
    end -= 1;
    while (start < end)
    {
        char temp = s[start];
        s[start] = s[end];
        s[end] = temp;
        start++;
        end--;
    }
    cout << "Reversed String : " << s << endl;
    return 0;
}
