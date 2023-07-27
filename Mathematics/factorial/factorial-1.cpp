#include<bits/stdc++.h>
using namespace std;


int fact(int num)
{
    int mul=1;
    for(int i=1;i<=num;i++)
    {
        mul=mul*i;
    }
    return mul;
}

int main()
{
    int n;
    cin>>n;
    cout<<fact(n)<<endl;

    return 0;
}