// find square root 

#include <bits/stdc++.h>
using namespace std;

int square_root(int n)
{
    int res = 1;
    int i = 1;

    while (res <= n)
    {
        i++;
        res = i * i;
    }
    return i - 1;
}
int main()
{
    int n;
    cin >> n;

    cout << square_root(n) << endl;

    return 0;
}