#include<bits/stdc++.h>
using namespace std;


int count_trail_zero(int n)
{
    int result=0;
    
    for(int i=5;i<=n;i=i*5)
    {
        
        result=result+n/i;
    }
    return result;
}



int main()
{
    int num;
    cin>>num;
    cout<<count_trail_zero(num)<<endl;
    return 0;
}