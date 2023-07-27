#include <bits/stdc++.h>
using namespace std;

bool myComp(pair<int, int> a, pair<int, int> b)
{
    double r1 = (double)a.first / a.second;

    double r2 = (double)b.first / b.second;

    return r1 > r2;
}

double fKnapS(pair<int, int> arr[], int W, int n)
{
    sort(arr, arr + n, myComp);

    double res = 0.0;

    for (int i = 0; i < n; i++)
    {
        if (arr[i].second <= W)
        {
            W = W - arr[i].second;

            res = res + arr[i].first;
        }

        else
        {
            res = res + arr[i].first * ((double)W / arr[i].second);

            break;
        }
    }

    return res;
}

int main()
{
    pair<int, int> arr[] = {make_pair(120, 30), make_pair(100, 20), make_pair(60, 10)};

    int n = 3;
    int W = 50;

    cout << fKnapS(arr, W, n);

    return 0;
}