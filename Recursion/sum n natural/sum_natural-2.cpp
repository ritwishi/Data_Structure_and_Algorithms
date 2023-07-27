//sum of natural no
#include<bits/stdc++.h>
using namespace std;

int getSum(int n)
{
    return (n*(n+1))/2;
}

int main()
{
    int num;
    cin>>num;
    cout<<getSum(num)<<endl;
    return 0;
}