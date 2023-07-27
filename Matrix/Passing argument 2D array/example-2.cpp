#include <bits/stdc++.h>
using namespace std;

const int r = 3;

const int c = 2;

void print(int mat[r][c])
{
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cout << mat[i][j] << " ";
        }

        cout << endl;
    }
}

int main()
{
    int mat[r][c] = {{10, 20},
                     {30, 40},
                     {50, 60}};

    print(mat);
}