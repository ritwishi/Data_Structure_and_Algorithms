#include <bits/stdc++.h>
using namespace std;

int power(int x, int n)
{
    if (n == 0)
    {
        return 1;
    }
    int temp = pow(x, n / 2);
    temp = temp * temp;
    if (n % 2 == 0)
    {
        return temp;
    }
    else
    {
        return temp * x;
    }
}

int main()
{
    int a, b;
    cin >> a >> b;
    cout << power(a, b) << endl;
    return 0;
}