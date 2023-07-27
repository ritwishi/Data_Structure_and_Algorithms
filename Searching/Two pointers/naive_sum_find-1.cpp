// find sum is present in array
// i/p- arr[]={3,5,9,2,8,10,11}  ,x=17,       o/p-yes

#include <bits/stdc++.h>
using namespace std;

bool Find_sum(int arr[], int n, int x)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (arr[i] + arr[j] == x)
            {
                return true;
            }
        }
    }
    return false;
}

int main()
{
    int n;
    cin >> n;

    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int x;
    cin >> x;

    if (Find_sum(arr, n, x))
    {
        cout << "yes" << endl;
    }

    else
    {
        cout << "no" << endl;
    }

    return 0;
}