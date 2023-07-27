//naive method-find prime no from a to b
#include <bits/stdc++.h>
using namespace std;

bool is_Prime(int n)
{
    if (n == 1)
    {
        return false;
    }
    if (n == 2 || n == 3)
    {
        return true;
    }
    if (n % 2 == 0 || n % 3 == 0)
    {
        return false;
    }
    for (int i = 5; i <= sqrt(n); i = i + 6)
    {
        if (n % i == 0 || n % (i + 2))
        {
            return false;
        }
    }
    return true;
}

int main()
{
    int a, b;
    cin >> a >> b;
    for (int num = a; num <= b; num++)
    {
        if (is_Prime(num))
        {
            cout << num << " "
                 << "prime" << endl;
        }
        else
        {
            cout << num << " "
                 << "not prime" << endl;
        }
    }
    return 0;
}