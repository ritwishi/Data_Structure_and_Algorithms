#include<bits/stdc++.h>
using namespace std;

const int r=4;

const int c=4;

const int n=4;

void bTrevarsal(int mat[r][c])
{
    if (r == 1)
    {
        for (int i = 0; i < c; i++)
        {
            cout << mat[0][i] << " ";
        }
    }

    else if (c == 1)
    {
        for (int i = 0; i < r; i++)
        {
            cout << mat[i][0] << " ";
        }
    }

    else
    {
        for (int i = 0; i < c; i++)
        {
            cout << mat[0][i] << " ";
        }

        for (int i = 1; i < r; i++)
        {
            cout << mat[i][c - 1] << " ";
        }

        for (int i = c - 2; i >= 0; i--)
        {
            cout << mat[r - 1][i] << " ";
        }

        for (int i = r - 2; i >= 1; i--)
        {
            cout << mat[i][0] << " ";
        }

       
    }
}

void spiral(int mat[r][c],int i,int j)
{

    if(n%2==0)
    {
        if(i==r/2 && j==c/2-1)
        {
            return;
        }
    }

    else
    {
        if(i==r/2 && j==c/2)
        {
            return;
        }
    }

    bTrevarsal(mat);

    spiral(mat,i+1,j+1);
}

int main()
{
    int mat[r][c]={{1, 2, 3, 4},
                     {5, 6, 7, 8},
                     {9, 10, 11, 12},
                     {13, 14, 15, 16}};

    int i=0,j=0;

    spiral(mat,i,j);

    
}