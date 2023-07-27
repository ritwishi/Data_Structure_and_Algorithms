#include <bits/stdc++.h>
using namespace std;

void print_divisor(int n)
{
    for (int i = 1; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            cout << i << " ";

            if (i != n / i)
            {

                cout << n / i << " ";
            }
        }
    }
}

int main()
{
    int num;
    cin >> num;
    print_divisor(num);
}