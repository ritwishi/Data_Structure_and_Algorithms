/*
int maxel = INT_MIN;
    maxel = *max_element(arr, arr + n);






for (int i = 0; i < 7; i++)
        if (arr[i] > maxel)
            maxel = arr[i];

    maxel = *max_element(arr, arr + n);


*/





#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr[] = {1, 3, 3, 2, 7, 7, 9};
    int n = 7;

    // find max element
    int maxel = INT_MIN;
    maxel = *max_element(arr, arr + n);

    // count all elements
    int counter[maxel + 1] = {0};
    for (int i = 0; i < n; i++)
        counter[arr[i]]++;

    int maxim = INT_MIN;
    int maxNum = -1;
    for (int i = 0; i < maxel + 1; i++)
    {
        if (counter[i] > maxim)
        {
            maxim = counter[i];
            maxNum = i;
        }
    }

    cout << maxNum << " " << maxim;
}