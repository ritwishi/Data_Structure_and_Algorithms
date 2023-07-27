/* Count inversion in an array

   i/p-arr[n1]={2,4,1,3,5}

   o/p- 3    pairs{(2,1),(4,1),(4,3)}

*/

#include <bits/stdc++.h>
using namespace std;

int count_inv(int arr[], int n)
{
    int count = 0;

    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] > arr[j])
            {
                count++;
            }
        }
    }

    return count;
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

    cout << count_inv(arr, n) << endl;

    return 0;
}