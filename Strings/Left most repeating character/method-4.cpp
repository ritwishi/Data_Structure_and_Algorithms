#include<bits/stdc++.h>
using namespace std;

const int CHAR=256;

int left_most(string &s)
{
    bool visted[CHAR];

    fill(visted,visted+CHAR,false);

    int res=-1;

    for(int i=s.length()-1;i>=0;i--)
    {
        if(visted[s[i]])
        {
            res=i;
        }

        else
        {
            visted[s[i]]=true;
        }
    }

    return res;
}

int main()
{
    string s;

    cin>>s;

    cout<<left_most(s)<<endl;

    return 0;
}