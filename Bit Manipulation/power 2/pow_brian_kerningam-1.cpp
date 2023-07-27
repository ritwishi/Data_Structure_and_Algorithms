#include<bits/stdc++.h>
using namespace std;

bool is_pow2(int n)
{
    if(n==0)
    {
        return false;
    }
    return((n&(n-1))==0);
}

int main()
{
    int num;
    cin>>num;
    if(is_pow2(num))
    {
        cout<<"yes"<<endl;
    }
    else
    {
        cout<<"no"<<endl;
    }
    return 0;
}