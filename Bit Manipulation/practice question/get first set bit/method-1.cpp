#include<bits/stdc++.h>
using namespace std;

int getFirstbit(int n)
{
   int count=1;
   while(n>0)
   {
       if(n&1==1)
       {
           return count;
       }
       n=n>>1;
       count++;
   }
   return count;
}

int main()
{
    int num;
    cin>>num;
    cout<<getFirstbit(num)<<endl;
    return 0;
}