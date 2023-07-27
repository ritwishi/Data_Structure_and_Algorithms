/*
  stock buy and sell
   i/p-arr[]={1,5,3,8,12}
   o/p- 13
*/
#include <bits/stdc++.h>
using namespace std;

int max_profit(int price[], int n)
{
    int profit = 0;

    for (int i = 1; i < n; i++)
    {
        if (price[i] > price[i - 1])
        {
            profit = profit + (price[i] - price[i - 1]);
        }
    }
    return profit;
}

int main()
{
    int n;
    cin >> n;

    int price[n];
    for (int i = 0; i < n; i++)
    {
        cin >> price[i];
    }

    cout << max_profit(price, n);
    return 0;
}