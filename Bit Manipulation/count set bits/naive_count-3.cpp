// count bits(3)
#include <bits/stdc++.h>
using namespace std;

int count_bits(int n)
{
    int count = 0;
    while (n > 0)
    {
        count = count + (n & 1);
        n = n >> 1;
    }
    return count;
}

int main()
{
    int num;
    cin >> num;
    cout << count_bits(num) << endl;
    return 0;
}