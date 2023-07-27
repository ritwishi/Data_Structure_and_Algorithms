#include <bits/stdc++.h>
using namespace std;

int naive_gcd(int a, int b)
{
    int res = min(a, b);
    while (res > 0)
    {
        if (a % res == 0 && b % res == 0)
        {
            break;
        }

        res--;
    }
    return res;
}

int main()
{
    int num1, num2;
    cin >> num1 >> num2;
    cout << naive_gcd(num1, num2) << endl;
    return 0;
}