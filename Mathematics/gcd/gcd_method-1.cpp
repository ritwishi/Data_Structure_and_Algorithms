#include <bits/stdc++.h>
using namespace std;
int gcd1(int a, int b)
{
    while (a != b)
    {
        if (a > b)
        {
            a = a - b;
        }
        else
        {
            b = b - a;
        }
    }
    return a;
}

int main()
{
    int num1, num2;
    cin >> num1 >> num2;
    cout << gcd1(num1, num2) << endl;
    return 0;
}