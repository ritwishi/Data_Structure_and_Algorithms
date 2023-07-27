#include<bits/stdc++.h>
using namespace std;

bool isPow2(int n)
{
    if(n==0)
    {
        return false;
    }
    while(n!=1)
    {
        if(n%2!=0)
        {
            return false;
        }
        return true;
    }
    return true;
}

int main()
{
    int num;
    cin>>num;
    if(isPow2(num))
    {
        cout<<"yes"<<endl;
    }
    else
    {
        cout<<"no"<<endl;
    }
    return 0;
}
