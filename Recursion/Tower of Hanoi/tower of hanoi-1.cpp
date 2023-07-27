// Tower of Hanoi
#include<bits/stdc++.h>
using namespace std;

void ToH(int n,char A,char B ,char C)
{
  if(n==1)
  {
      cout<<"move 1 from"<<" "<< A <<" "<<"to"<<" "<< C <<endl;
      return ;
  }
  ToH(n-1,A,C,B);
  cout<<"move disc"<<" "<<n<<" "<<"from"<<" "<<A <<" "<<"to"<<" "<< C <<endl;
  ToH(n-1,B,A,C);  
}


int main()
{
    int n;
    cin>>n;
    
    ToH(n,'A','B','C');
    return 0;
}
