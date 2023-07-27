//log base
#include<bits/stdc++.h>
using namespace std;

int fun(int n)
{
    if(n==1)
    {
        return 0;
    }
    else
    {
        return 1 +fun (n/2);
    }
}

int main()
{
    int num;
    cin>>num;
    cout<<fun(num)<<endl;
    return 0;
}