#include <bits/stdc++.h>
using namespace std;

int main()
{
    int m, n;
    cin >> m >> n;

    int arr[m][n];

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            arr[i][j] = i + j;
        }
    }

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << arr[i][j] << " ";
        }

        cout<<endl;
    }

    return 0;
}