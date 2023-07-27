#include <bits/stdc++.h>
using namespace std;

int minimum_coin(int coin[], int n, int amount)
{
    sort(coin, coin + n);

    int res = 0;

    for (int i = n - 1; i >= 0; i--)
   {
        if (coin[i] <= amount)
        {
            int c = floor(amount / coin[i]);

            res = res + c;

            amount = amount - c * coin[i];
        }

        if (amount == 0)
            break;
    }

    return res;
}

int main()
{
    int n;

    cin >> n;

    int coin[n];

    for (int i = 0; i < n; i++)
    {
        cin >> coin[i];
    }

    int amount;

    cin >> amount;

    cout << minimum_coin(coin, n, amount) << endl;

    return 0;
}