#include <bits/stdc++.h>
using namespace std;
int countDigits(int num)
{
    int res = 0;
    while (num > 0)
    {
        num = num / 10;
        res++;
    }
    return res;
}

int main()
{
    int n;
    cin >> n;
    cout << countDigits(n) << endl;
    return 0;
}