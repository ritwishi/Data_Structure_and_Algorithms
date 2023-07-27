#include<bits/stdc++.h>
using namespace std;

int getFirstbit(int n)
{
    return log2(n&~(n-1))+1;
}

int main()
{
    int num;
    cin>>num;
    cout<<getFirstbit(num)<<endl;
    return 0;
}