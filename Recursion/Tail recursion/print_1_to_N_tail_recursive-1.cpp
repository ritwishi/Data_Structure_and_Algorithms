//print_1_to_N tail recursive
#include<bits/stdc++.h>
using namespace std;

void print_1_to_N(int n,int k)
{
    if(n==0)
    {
        return;
    }
    else
    {
        cout<<k<<endl;
        print_1_to_N(n-1,k+1);
    }
}

int main()
{
    int num1,num2;
    cin>>num1>>num2;
    print_1_to_N(num1,num2);
    return 0;
}