#include<bits/stdc++.h>
using namespace std;

int getFirstbit(int n)
{
    int count=0;
    while((n&1)!=1)
    {
        count++;
        n=n>>1;
    }
    return count+1;
}

int main()
{
    int num;
    cin>>num;
    cout<<getFirstbit(num)<<endl;
    return 0;
}