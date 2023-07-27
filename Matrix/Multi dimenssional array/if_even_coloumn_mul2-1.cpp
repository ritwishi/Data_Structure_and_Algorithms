#include <bits/stdc++.h>
using namespace std;

int main()
{
    int m, n;

    cin >> m >> n;

    vector<int> arr[m];

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            arr[i].push_back(1);
        }
    }

    for (int i = 0; i < m; i++)
    {

        for (int j = 0; j < n; j++)
        {
            if (j % 2 == 0)
            {
                arr[i][j] = 2 * arr[i][j];
            }
        }
    }

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << arr[i][j] << " ";
        }

        cout << endl;
    }
}