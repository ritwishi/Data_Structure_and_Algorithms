#include <bits/stdc++.h>
using namespace std;

void prime_factor(int n)
{
    if (n <= 1)
    {
        return;
    }
    for (int i = 2; i <= sqrt(n); i++)
    {
        while (n % i == 0)
        {
            cout << i << " ";
            n = n / i;
        }
    }
    if (n > 1)
    {
        cout << n << " ";
    }
}

int main()
{
    int num;
    cin >> num;
    prime_factor(num);
    return 0;
}