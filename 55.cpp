// Write a program to find the transpose of a given matrix using nested for loops.
#include <iostream>
using namespace std;

int main()
{
    int matrix[2][3] = {{1, 2, 3}, {4, 5, 6}};
    cout << "Matrix before transpose" << endl;
    int row = 2, col = 3;
    for (int i = 0; i < row; i++)
    {

        for (int j = 0; j < col; j++)
        {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

    int transpose[3][2];
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            transpose[j][i] = matrix[i][j];
        }
    }
    cout << endl;
    cout << "Matrix after transpose" << endl;
    for (int i = 0; i < col; i++)
    {
        for (int j = 0; j < row; j++)
        {
            cout << transpose[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
