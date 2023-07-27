#include <bits/stdc++.h>
using namespace std;

int count_five(int n)
{

    int count = 0;

    for (int i = 1; i <= n; i++)
    {
        int temp = i;

        while (temp % 5 == 0)
        {
            temp = temp / 5;
            count++;
        }
    }

    return count;
}

int main()
{
    int num;
    cin >> num;
    cout << count_five(num) << endl;
    return 0;
}