#include <bits/stdc++.h>
using namespace std;

bool my_comp(pair<int, int> a, pair<int, int> b)
{
    return (a.second < b.second);
}

int max_activity(pair<int, int> arr[], int n)
{
    sort(arr, arr + n, my_comp);

    int res = 1;

    int prev = 0;

    for (int curr = 1; curr < n; curr++)
    {
        if (arr[curr].first >= arr[prev].second)
        {
            res++;

            prev = curr;
        }
    }

    return res;
}

int main()
{
    pair<int, int> arr[] = {make_pair(12, 25), make_pair(10, 20), make_pair(20, 30)};

    int n = 3;

    cout << max_activity(arr, n) << endl;

    return 0;
}