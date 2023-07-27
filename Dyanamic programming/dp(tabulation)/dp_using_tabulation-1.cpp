#include <bits/stdc++.h>
using namespace std;

int fib(int n, int k)
{
    int fib[n + 1];

    fib[0] = 0;
    fib[1] = 1;

    for (int i = 2; i <= n; i++)
    {
        fib[i] = fib[i - 1] + fib[i - 2];
    }

    return fib[k];
}

int main()
{
    int n;

    cin >> n;

    int k;

    cin >> k;

    cout << fib(n, k) << endl;

    return 0;
}