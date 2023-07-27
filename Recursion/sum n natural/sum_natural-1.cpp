// natural no sum with recurssion
#include<bits/stdc++.h>
using namespace std;

int getSum(int n)
{
    if(n==0)
    {
        return 0;
    }
    else
    {
        return n + getSum(n-1);
    }
}

int main()
{
    int num;
    cin>>num;
    cout<<getSum(num)<<endl;
    return 0;
}