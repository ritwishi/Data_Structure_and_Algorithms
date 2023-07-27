#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[n];
    int i;

    for (i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    for (int i = 0; i < n; i++)
    {
        if (arr[i] % 2 == 0)
        {
            cout << "even" << arr[i] << " ";
        }
    }
    cout << endl;

    for (i = 0; i < n; i++)
    {
        if (arr[i] % 2 != 0)
        {
            cout << "odd" << arr[i] << " ";
        }
    }
    return 0;
}