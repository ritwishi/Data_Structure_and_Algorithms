#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n = 5;
    int cost[n] = {1, 12, 5, 111, 200};
    int sum = 10;

    int res = 0;
    int count = 0;

    sort(cost, cost + n);

    for (int i = 0; i < n; i++)
    {
        if (cost[i] <= sum)
        {
            res = res + cost[i];

            count++;
        }
        else
        {
            break;
        }
    }
    cout << count << endl;

    return 0;
}
