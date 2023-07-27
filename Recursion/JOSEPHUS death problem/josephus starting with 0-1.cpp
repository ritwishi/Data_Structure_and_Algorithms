//josephus problem no starting with 0
#include <bits/stdc++.h>
using namespace std;

int JOS(int n, int k)
{
    if (n == 1)
    {
        return 0;
    }
    else

        return (JOS(n - 1, k) + k) % n;
}

int main()
{
    int n, k;
    cin >> n >> k;
    cout << JOS(n, k) << endl;
    return 0;
}