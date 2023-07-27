#include <bits/stdc++.h>
using namespace std;

bool check_palindrome(int num)
{
    int rev = 0;
    int lim = num;
    while (num > 0)
    {
        int rem = num % 10;
        rev = rev * 10 + rem;
        num = num / 10;
        if (lim == rev)
        {
            return true;
        }
    }
    return false;
}

int main()
{
    int n;
    cin >> n;
    if (check_palindrome(n) == true)
    {
        cout << "palindrome no" << endl;
    }
    else
    {
        cout << "not palindrome no" << endl;
    }
    return 0;
}