/* Median of two sorted array

i/p- arr1[]={30,40,50,60} ,n1=4
     arr2[]={5,6,7,8,9}   ,n2=5

o/p- 9

*/

#include <bits/stdc++.h>
using namespace std;

double get_med(int arr1[], int arr2[], int n1, int n2)
{
    int begin1 = 0, end1 = n1;

    while (begin1 < end1)
    {
        int i1 = (begin1 + end1) / 2;

        int i2 = (n1 + n2 + 1) / 2 - i1;

        int min1, min2, max1, max2;

        if (i1 == n1)
        {
            min1 = INT_MAX;
        }

        else
        {
            min1 = arr1[i1];
        }

        if (i1 == 0)
        {
            max1 = INT_MIN;
        }

        else
        {
            max1 = arr1[i1 - 1];
        }

        if (i2 == n2)
        {
            min2 = INT_MAX;
        }

        else
        {
            min2 = arr2[i2];
        }

        if (i2 == 0)
        {
            max2 = INT_MIN;
        }

        else
        {
            max2 = arr2[i2 - 1];
        }

        if (min1 >= max2 && min2 >= max1)
        {
            if ((n1 + n2) % 2 == 0)
            {
                return ((double)max(max1, max2) + min(min1, min2) / 2);
            }

            else
            {
                return (double)max(max1, max2);
            }
        }

        else if (max1 > min2)
        {
            end1 = i1 - 1;
        }

        else
        {
            begin1 = i1 + 1;
        }
    }

    return -1;
}

int main()
{
    int n1;
    cin >> n1;

    int arr1[n1];

    for (int i = 0; i < n1; i++)
    {
        cin >> arr1[i];
    }

    int n2;
    cin >> n2;

    int arr2[n2];

    for (int j = 0; j < n2; j++)
    {
        cin >> arr2[j];
    }

    cout << get_med(arr1, arr2, n1, n2) << endl;

    return 0;
}