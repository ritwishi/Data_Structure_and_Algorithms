/*   majority element
  i/p-arr[]={8,3,4,8,8}
  o/p- any of index 0 or 3 or 4


  i/p-arr[]={3,7,4,7,7,5}
  o/p- -1   (res>n/2)
*/
#include <bits/stdc++.h>
using namespace std;

int majority_element(int arr[], int n)
{

    int res = 1;

    for (int i = 0; i < n; i++)
    {
        int count = 1;

        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] == arr[j])
            {
                count++;
            }
            res = max(res, count);
        }
        if (res > n / 2)
        {
            return i;
        }
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

    cout << majority_element(arr, n) << endl;
    return 0;
}