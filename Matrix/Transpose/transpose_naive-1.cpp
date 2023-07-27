#include <bits/stdc++.h>
using namespace std;

const int n = 4;

void Transpose(int mat[n][n])
{
    int temp;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            temp = mat[i][j];

            mat[i][j] = mat[j][i];

            mat[j][i] = temp;
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << mat[j][i] << " ";
        }

        cout << endl;
    }
}

int main()
{

    int mat[n][n] = {{1, 2, 3, 4},
                     {5, 6, 7, 8},
                     {9, 10, 11, 12},
                     {13, 14, 15, 16}};

    Transpose(mat);
}