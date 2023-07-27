#include <bits/stdc++.h>
using namespace std;

bool isPrime(int n)
{
    if (n == 1)
    {
        return false;
    }
   /* if (n == 2 || n == 3)
    {
        return true;
    }*/
    if (n % 2 == 0 || n % 3 == 0)
    {
        return false;
    }
    for (int i = 5; i <= sqrt(n); i = i + 6)
    {
        if (n % i == 0 || n % (i + 2) == 0)
        {
            return false;
        }
    }
    return true;
}

int main()
{
    int num;
    cin >> num;
    if (isPrime(num))
    {
        cout << "prime"
             << " " << num << endl;
    }
    else
    {
        cout << "not prime"
             << " " << num << endl;
    }
    return 0;
}