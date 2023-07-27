#include<bits/stdc++.h>
using namespace std;

int get_right_most_different_bit(int m,int n)
{
    int res=m^n;
    int count=1;
    while((res&1)!=1)
    {
        count++;
        res=res>>1;
    }
    return count;

}

int main()
{
    int num1,num2;
    cin>>num1>>num2;
    cout<<get_right_most_different_bit(num1,num2)<<endl;
    return 0;
}