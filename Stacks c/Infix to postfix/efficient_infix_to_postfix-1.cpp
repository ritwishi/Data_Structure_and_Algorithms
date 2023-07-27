#include <bits/stdc++.h>
using namespace std;

int pre(char x)
{
    if (x == '^')
    {
        return 3;
    }

    else if (x == '*' || x == '/')
    {
        return 2;
    }

    else if (x == '+' || x == '-')
    {
        return 1;
    }

    else
    {
        return -1;
    }
}

string infix_postfix(string &s)
{
    stack<char> st;

    string ans = "";

    for (int i = 0; i < s.length(); i++)
    {
        if ((s[i] >= 'a' && s[i] <= 'z') || (s[i] >= 'A' && s[i] <= 'z'))
        {
            ans = ans + s[i];
        }

        else if (s[i] == '(')
        {
            st.push(s[i]);
        }

        else if (s[i] == ')')
        {
            while (st.empty() == false && st.top() != '(')
            {
                ans = ans + st.top();

                st.pop();
            }

            if (st.empty() == false)
            {
                st.pop();
            }
        }

        else
        {
            while (st.empty() == false && pre(st.top()) >= pre(s[i]))
            {
                ans = ans + st.top();

                st.pop();
            }

            st.push(s[i]);
        }
    }

    while (st.empty() == false)
    {
        ans = ans + st.top();

        st.pop();
    }

    return ans;
}

int main()
{
    string s;

    cin >> s;

    cout << infix_postfix(s) << endl;

    return 0;
}