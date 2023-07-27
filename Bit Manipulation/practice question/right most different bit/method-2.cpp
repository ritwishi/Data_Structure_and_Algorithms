#include<bits/stdc++.h>
using namespace std;

int get_right_most_different_bit(int m,int n)
{
    int res=m^n;
    return (log2(res&~(res-1))+1);
}

int main()
{
    int num1,num2;
    cin>>num1>>num2;
    cout<<get_right_most_different_bit(num1,num2)<<endl;
    return 0;
}