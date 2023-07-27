#include<bits/stdc++.h>
using namespace std;

const int r=4;

const int c=4;

void search_row_column(int mat[r][c],int x)
{
    

    int row=0;

    int j;

    bool flag=0;

    for( j=0;j<c;j++)
    {
        if(mat[row][j]>x)
        {
            break;
        }

        else if(mat[row][j]==x)
        {
            cout<<"found at"<<" "<<row<<" "<<j<<" ";

             flag=1;
        }
     
       
        
    }

   int column=j-1;

    for(int i=0;i<r;i++)
    {
        

        if(mat[i][column]==x)
        {
             cout<<"found at"<<" "<<i<<" "<<column<<" ";

              flag=1;
        }

       
    }
 
        if(flag==0)
        {
             cout<<"not found"<<endl;
        }    
    
   
}

int main()
{
  int mat[r][c]={{10,20,30,40},
                  {15,25,35,45},
                  {27,29,37,48},
                  {32,33,39,50}};

    int x;
    cin>>x;

    search_row_column(mat,x);

    return 0;
}