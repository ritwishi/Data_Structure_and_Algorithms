#include<bits/stdc++.h>
using namespace std;

bool isPrime( int num1)
{
    if(num1==1)
    {
        return false;
    }
   for(int j=2;j<=sqrt(num1);j++)
   {
       if(num1%j==0)
       {
           return false;
       }
   }
   return true;
}

void prime_factor(int n)
{
    for(int i=2;i<=n;i++)
    {
      if(isPrime(i))
      {
          int x=i;
          while(n%x==0)
          {
              cout<<i<<" ";
              x=x*i;

          }
      }
       
    }
   
}

int main()
{
    int num;
    cin>>num;
    prime_factor(num);
    return 0;
}