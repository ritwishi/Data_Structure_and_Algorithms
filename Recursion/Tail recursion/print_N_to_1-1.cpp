//optimise print n to 1
#include<bits/stdc++.h>
using namespace std;

void print_N_to_1(int n)
{
    start:
    if(n==0)
    {
        return;
    }
    cout<<n<<endl;
    n=n-1;
    goto start;
}

int main()
{
    int num;
    cin>>num;
    print_N_to_1(num);
    return 0;
}