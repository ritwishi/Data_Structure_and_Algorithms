//count size remove duplicate
// i/p:arr[]={10,20,20,30,30,30,30}-7    o/p:arr[]={10,20,30,_,_,_,_}-3
#include <bits/stdc++.h>
using namespace std;

void remove_duplicate(int arr[], int n)
{
    int count = 1;
    for (int i = 1; i < n; i++)
    {
        if (arr[i - 1] != arr[i])
        {
            count++;
        }
    }
    cout << count << endl;
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
    remove_duplicate(arr, n);
    return 0;
}