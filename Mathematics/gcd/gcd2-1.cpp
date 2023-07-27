#include <bits/stdc++.h>
using namespace std;
int gcd2(int a, int b)
{
    if (b == 0)

    {
        return a;
    }

    else

    {
        return gcd2(b, a % b);
    }
}

int main()
{
    int num1, num2;
    cin >> num1 >> num2;
    cout << gcd2(num1, num2) << endl;
    return 0;
}