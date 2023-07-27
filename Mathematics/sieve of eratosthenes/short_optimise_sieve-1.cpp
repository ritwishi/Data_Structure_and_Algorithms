//best short sieve method
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
    for (int i = 2; i <= n; i++)
    {
        if (isPrime[i])
        {
            cout << i << " "
                 << "prime" << endl;
        }
        for (int j = i * i; j <= n; j = j + i)
        {
            isPrime[j] = false;
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