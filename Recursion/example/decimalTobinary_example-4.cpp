#include<bits/stdc++.h>
using namespace std;

void decimalTobinary(int n)
{
    if(n==0)
    {
        return ;
    }
    decimalTobinary(n/2);
    cout<<n%2<<endl;
}

int main()
{
    int num;
    cin>>num;
    decimalTobinary(num);
    return 0;
}