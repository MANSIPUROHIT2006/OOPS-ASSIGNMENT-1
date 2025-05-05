// Write a program to count number of vowels and consonants in a given string using a for loop
#include <iostream>
using namespace std;
int main()
{
    string s;
    cout << "Enter a string to count the number of vowels and consonants in it!" << endl;
    getline(cin, s);
    int size = s.length();
    int vow = 0, cons = 0;

    for (int i = 0; i < size; i++)
    {
        char c = s[i];
        if (c == ' ')
        {
            continue;
        }
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' || c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U')
        {
            vow++;
        }
        else
        {
            cons++;
        }
    }
    cout << "The number of vowels in the given string are : " << vow << endl;
    cout << "The number of consonants in the given string are : " << cons << endl;

    return 0;
}
