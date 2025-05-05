// Write a program to create a number guessing game where the user has to guess a number between 1 and 100 using a while loop

#include <iostream>
#include <stdlib.h>
#include <ctime>
using namespace std;

int main()
{
    cout << "Enter a guess number between 1 to 100" << endl;
    int n;
    cin >> n;
    srand(time(0));
    int random_number = rand() % (100 - 1 + 1) + 1;
    cout << random_number << endl;
    if (n == random_number)
    {
        cout << "You Won!" << endl;
    }
    else
    {
        cout << "You lost!" << endl;
    }
    return 0;
}
