//digit sum without recurssion
#include<bits/stdc++.h>
using namespace std;

int digitSum(int n)
{
    int sum=0;
    while(n>0)
    {
        int rem=n%10;
        n=n/10;
        sum=sum+rem;
    }
    return sum;
}

int main()
{
    int num;
    cin>>num;
    cout<<digitSum(num)<<endl;
    return 0;
}