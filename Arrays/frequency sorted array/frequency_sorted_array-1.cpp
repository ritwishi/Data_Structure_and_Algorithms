/*    count frequency
    i/p-arr[]={10,10,10,25,30,30}
    o/p-  10- 3
          25- 1
          30- 2



*/
#include <bits/stdc++.h>
using namespace std;

void frequency(int arr[], int n)
{
    int count = 1;
    for (int i = 0; i < n; i++)
    {

        if (arr[i] == arr[i + 1])
        {
            count++;
        }
        else
        {
            cout << arr[i] << " ";
            cout << count << endl;
            count = 1;
        }
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

    frequency(arr, n);
    return 0;
}