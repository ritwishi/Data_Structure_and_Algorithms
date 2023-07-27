//digit sum
#include<bits/stdc++.h>
using namespace std;

int digitSum(int n)
{
    if(n==0)
    {
        return 0;
    }
    return n%10+digitSum(n/10);
}

int main()
{
    int num;
    cin>>num;
    cout<<digitSum(num)<<endl;
    return 0;
}