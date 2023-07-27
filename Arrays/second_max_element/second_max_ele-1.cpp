// second highest element
//  I/P~ arr[4]={5,8,12,10}
// O/P~   10
#include <bits/stdc++.h>
using namespace std;

int second_max(int arr[], int n)

{
    int max_ele =INT_MIN;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > max_ele)
        {
            max_ele = arr[i];
        }
    }
    int scnd_max_ele = INT_MIN;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] != max_ele && arr[i] > scnd_max_ele)
        {
            scnd_max_ele = arr[i];
        }
        
    }
    return scnd_max_ele;
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

    cout << second_max(arr, n) << endl;
    return 0;
}