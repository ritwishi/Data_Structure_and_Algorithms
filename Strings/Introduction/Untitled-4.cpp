#include<bits/stdc++.h>
using namespace std;

int main()
{
    char s1[]="gfg";

    char s2[]="bcd";

    int res=strcmp(s1,s2);

    if(res>0)
    {
        cout<<"greater"<<endl;
    }

    else if(res==0)
    {
        cout<<"same"<<endl;
    }

    else
    {
        cout<<"smaller"<<endl;
    }

    return 0;
}