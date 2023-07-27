// print 1 to n
#include<bits/stdc++.h>
using namespace std;

void Print_1_to_N(int n)
{
    if(n==0)
    {
        return;
    }
    else
    {
        Print_1_to_N(n-1);
        cout<<n<<endl;
    }
}

int main()
{
    int num;
    cin>>num;
    Print_1_to_N(num);
    return 0;
}