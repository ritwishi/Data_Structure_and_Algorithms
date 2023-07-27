// check kth bit set or not
// using right shift
#include <bits/stdc++.h>
using namespace std;

void KthBit(int n, int k)
{
    if ((n >> (k - 1)) & 1 == 1)
    {
        cout << "set" << endl;
    }
    else
    {
        cout << "not set" << endl;
    }
}

int main()
{
    int a, b;
    cin >> a >> b;
    KthBit(a, b);
    return 0;
}