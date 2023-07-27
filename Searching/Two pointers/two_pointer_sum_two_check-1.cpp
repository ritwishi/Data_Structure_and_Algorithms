/*  Two pointer approach

  i/p-arr[]={2,4,8,9,11,12,20,30}  , x=23
  o/p- yes

*/
#include <bits/stdc++.h>
using namespace std;

bool Find_sum(int arr[], int n, int x)
{
    int left = 0, right = n - 1;

    while (left < right)
    {
        if (arr[left] + arr[right] == x)
        {
            return true;
        }

        else if (arr[left] + arr[right] > x)
        {
            right--;
        }

        else
        {
            left++;
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