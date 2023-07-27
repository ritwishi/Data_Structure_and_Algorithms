//first optimisation of sieve method
#include <bits/stdc++.h>
using namespace std;

void sieve(int n)
{
    if (n <= 1)
    {
        return;
    }
    bool isprime[n + 1];
    fill(isprime, isprime + n + 1, true);          
    for (int i = 2; i <= sqrt(n); i++)
    {
        if (isprime[i])
        {
            for (int j = 2 * i; j <= n; j = j + i)
            {
                isprime[j] = false;
            }
        }
    }
    for (int i = 2; i <= n; i++)
    {
        if (isprime[i])
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