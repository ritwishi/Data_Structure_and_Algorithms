// reverse an array
// i/p: arr[]={10,5,7,30}    o/p:arr[]={30,10,5,7}

#include <bits/stdc++.h>
using namespace std;

void reverse(int arr[], int n)
{
    int low = 0, high = n - 1;
    while (low < high)
    {
        int temp = arr[low];
        arr[low] = arr[high];                  // swap(arr[low],arr[high]);
        arr[high] = temp;

        high--;                                  // rest same
        low++;
    }
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
    cout << "before reverse" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    reverse(arr, n);

    cout << "after reverse" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}