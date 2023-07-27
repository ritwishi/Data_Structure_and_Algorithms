// count bits(1)
#include <bits/stdc++.h>
using namespace std;

int count_bit(int n)
{
    int count = 0;
    while (n > 0)
    {
        if (n % 2 != 0)
        {
            count++;
        }
        n = n / 2;
    }
    return count;
}

int main()
{
    int num;
    cin >> num;
    cout << count_bit(num) << endl;
    return 0;
}