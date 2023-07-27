#include<bits/stdc++.h>
using namespace std;

const int CHAR=256;

int left_most(string &s)
{
   int findex[CHAR];

    fill(findex,findex+CHAR,-1);

    int res=INT_MAX;

    for(int i=0;i<s.length();i++)
    {
        int fi=findex[s[i]];

        if(fi==-1)
        {
            findex[s[i]]=i;
        }

        else
        {
            res=min(res,fi);
        }
    }

    if(res==INT_MAX)
    {
        return -1;
    }

    else
    {
        return res;
    }


}

int main()
{
    string s;

    cin>>s;

    cout<<left_most(s);

    return 0;
}