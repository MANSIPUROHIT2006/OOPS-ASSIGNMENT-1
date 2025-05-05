// Write a program to count the frequency of each character in a string using a for loop

#include <iostream>
#include <string>
using namespace std;

int main()
{
    string str;

    cout << "Enter a string: ";
    getline(cin, str);

    int freq[26] = {0};

    for (int i = 0; i < str.length(); i++)
    {
        if (str[i] != ' ')
        {
            freq[str[i] - 'a']++;
        }
    }

    cout << "Character frequencies:\n";
    for (int i = 0; i < 26; i++)
    {
        if (freq[i] > 0)
        {
            cout << char(i + 'a') << ": " << freq[i] << endl;
        }
    }

    return 0;
}
