// arr[]={5,8,12,10}

#include <bits/stdc++.h>
using namespace std;
int max_ele(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        bool flag = true;
        for (int j = 0; j < n; j++)
        {
            if (arr[j] > arr[i])
            {
                flag = false;
                break;
            }
        }
        if (flag == true)
            return i;
    }
    return -1;
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
    cout << max_ele(arr, n) << endl;
    return 0;
}