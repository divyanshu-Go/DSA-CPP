#include <bits/stdc++.h>
using namespace std;

void matrixMultiplication()
{

    int row_1 = 2, col_1 = 4, row_2 = 4, col_2 = 3;
    int arr_1[row_1][col_1] =
        {
            {1, 2, 3, 4},
            {5, 6, 7, 8}
        };
    int arr_2[row_2][col_2] =
        {
            {1, 2, 3},
            {5, 6, 7},
            {9, 10, 11},
            {13, 14, 15}
        };

    int result[row_1][col_2];

    for (int i = 0; i < row_1; i++) {
        for (int j = 0; j < col_2; j++) {
            result[i][j] = 0;
        }
    }

    int term = 0;
    int j_index = 0;

    for (int i = 0; i < row_1; i++)
    {
        for (int j = 0; j < col_2; j++)
        {
            for (int k = 0; k < col_1; k++)
            {
                result[i][j] += arr_1[i][k] * arr_2[k][j];
            }
        }
    }

    for (int i = 0; i < row_1; i++)
    {
        for (int j = 0; j < col_2; j++)
        {
            cout << result[i][j] << " ";
        }
        cout << endl;
    }
}

int main()
{

    matrixMultiplication();
    return 0;
}