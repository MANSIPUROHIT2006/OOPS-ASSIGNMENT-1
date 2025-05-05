// Write a program to add two matrices using nested for loops.
#include <iostream>
using namespace std;
int main()
{
    int matrix1[2][3] = {{1, 2, 3}, {4, 5, 6}};
    int matrix2[2][3] = {{1, 2, 3}, {4, 5, 6}};
    int row = 2, col = 3;
    int sum_matrix[row][col];
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            sum_matrix[i][j] = matrix1[i][j] + matrix2[i][j];
        }
    }
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << sum_matrix[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
