#include <bits/stdc++.h>
using namespace std;

int eval_postfix(string &s)
{
    stack<int> st;

    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == '+' || s[i] == '*' || s[i] == '-' || s[i] == '/')
        {
            int op2 = st.top();

            st.pop();

            int op1 = st.top();

            st.pop();

            if (s[i] == '+')
            {
                st.push(op1 + op2);
            }

            else if (s[i] == '-')

            {
                st.push(op1 - op2);
            }

            else if (s[i] == '*')
            {
                st.push(op1 * op2);
            }

            else if (s[i] == '/')
            {
                st.push(op1 / op2);
            }
        }

        else
        {
            int val = s[i] - '0';

            st.push(val);
        }
    }

    return st.top();
}

int main()
{
    string s;

    cin >> s;

    cout << eval_postfix(s) << endl;

    return 0;
}