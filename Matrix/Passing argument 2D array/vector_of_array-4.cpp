#include <bits/stdc++.h>
using namespace std;

void print(vector<int> arr[], int m, int n)
{
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}

int main()
{
    int m, n;

    cin >> m >> n;

    vector<int> arr[m];

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            arr[i].push_back(i);
        }
    }

    print(arr, m, n);
}