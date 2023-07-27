#include <bits/stdc++.h>
using namespace std;

int search(int arr[], int x)
{
    int i = 0;

    while (true)
    {
        if (arr[i] == x)
        {
            return i;
        }

        else if (arr[i] > x)
        {
            return -1;
        }

        i++;
    }
}

int main()
{
    int arr[] = {1, 2, 3, 5, 5};

    int x = 4;

    cout << search(arr, x) << endl;
    return 0;
}