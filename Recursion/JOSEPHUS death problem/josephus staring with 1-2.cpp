//josephus problem no starting with 1
#include <bits/stdc++.h>
using namespace std;

int JOS(int n, int k)
{
    if (n == 1)
    {
        return 0;
    }
    return (JOS(n - 1, k) + k) % n;
}

int myJOS(int n, int k)
{
    return JOS(n, k) + 1;
}

int main()
{
    int n, k;
    cin >> n >> k;
    cout << myJOS(n, k) << endl;
    return 0;
}
