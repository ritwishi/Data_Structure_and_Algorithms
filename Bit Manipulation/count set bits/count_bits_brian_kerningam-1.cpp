//count bits using brian kerningam
#include <bits/stdc++.h>
using namespace std;

int count_bits(int n)
{
    int count = 0;
    while (n > 0)
    {
        n = (n & (n - 1));
        count++;
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