#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr[5] = {3, 7, 11, 2, 6};

    int maxEl = INT_MIN;

    for(int i = 0; i < 5; i ++)
    {
        if(arr[i] > maxEl)
            maxEl = arr[i];
    }

    int secMax = INT_MIN;

    for(int i = 0; i < 5; i++)
    {
        if(arr[i] != maxEl && arr[i] > secMax)
            secMax = arr[i];
    }

    int thirdMax = INT_MIN;

    for(int i = 0; i < 5; i++)
    {
        if(arr[i] != maxEl && arr[i] != secMax && arr[i] > thirdMax)
            thirdMax = arr[i];
    } 

    cout << thirdMax;
}