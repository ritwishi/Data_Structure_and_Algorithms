/*
  check array is sorted or not.

 i/p~arr[4]={5,7 9,10}
 o/p~yes

 i/p~arr[4]={3,19,12,21}
 o/p~ no

*/
#include <bits/stdc++.h>
using namespace std;

bool sorted(int arr[], int n)
{
    
    for (int i = 1; i < n; i++)
    {
        if (arr[i] < arr[i - 1])
            return false;
    }
    return true;
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
    if (sorted(arr, n) == true)
    {
        cout << "yes" << endl;
    }
    else
    {
        cout << "no" << endl;
    }
    return 0;
}