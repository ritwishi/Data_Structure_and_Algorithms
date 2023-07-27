#include<bits/stdc++.h>
using namespace std;
int count_fact_zero(int n)
{
    int mul=1;
    for(int i=2;i<=n;i++)
    {
        mul=mul*i;
    }
    int result=0;
    while(mul%10==0)
    {
        result++;
        mul=mul/10;
    }
    return result;
}



int main()
{
    int num;
    cin>>num;
    cout<<count_fact_zero(num)<<endl;
    return 0;
}