#include <bits/stdc++.h>
using namespace std;

int naive_lcm(int a, int b)
{
    int res = max(a, b);
    while (res > 0)
    {
        if (res % a == 0 && res % b == 0)
        {
            break;
        }
        res++;
    }
    return res;
}

int main()
{
    int num1, num2;
    cin >> num1 >> num2;
    cout << naive_lcm(num1, num2) << endl;
    return 0;
}