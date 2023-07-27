//second optimisation of sieve method
#include <bits/stdc++.h>
using namespace std;

void sieve(int n)
{
    if (n <= 1)
    {
        return;
    }
    bool isPrime[n + 1];
    fill(isPrime, isPrime + n + 1, true);
    for (int i = 2; i <= sqrt(n); i++)
    {
        if (isPrime[i])
        {
            for (int j = i * i; j <= n; j = i + j)
            {
                isPrime[j] = false;
            }
        }
    }
    for (int i = 2; i <= n; i++)
    {
        if (isPrime[i])
        {
            cout << i << " "
                 << "prime" << endl;
        }
    }
}

int main()
{
    int num;
    cin >> num;
    sieve(num);
    return 0;
}