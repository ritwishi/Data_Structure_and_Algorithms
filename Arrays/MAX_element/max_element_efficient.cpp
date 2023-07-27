//find max element
//arr[]={5,8,12,10}
#include <bits/stdc++.h>
using namespace std;

int max_element(int arr[], int n)
{
    int i;
    int maxEle = INT_MIN;
    for (i = 0; i < n; i++)
    {
        if (arr[i] > maxEle)
            maxEle = arr[i];
    }
    return maxEle;
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
    cout << max_element(arr, n) << endl;
    return 0;
}
