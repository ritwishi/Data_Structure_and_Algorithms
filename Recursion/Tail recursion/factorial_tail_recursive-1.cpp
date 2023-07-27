//tail recursion factorial
#include<bits/stdc++.h>
using namespace std;

int fact(int n,int k)
{
    if(n==0||n==1)
    {
        return k;
    }
    else
    {
        return fact(n-1,n*k);
    }
}

int main()
{
    int num1,num2;
    cin>>num1>>num2;
    cout<<fact(num1,num2)<<endl;
    return 0;
}