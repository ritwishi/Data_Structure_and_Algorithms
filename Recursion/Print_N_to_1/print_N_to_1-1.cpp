// print n to 1
#include<bits/stdc++.h>
using namespace std;

void print_N_to_1(int n)
{
    if(n==0)
    {
        return;
    
    }
    else
    {
        cout<<n<<endl;
        print_N_to_1(n-1);
    }
}

int main()
{
    int num;
    cin>>num;
    print_N_to_1(num);
    return 0;
}