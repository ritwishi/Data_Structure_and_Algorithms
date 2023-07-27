#include<bits/stdc++.h>
using namespace std;

void lps_arr(string &s)
{
   vector<int>lps;

    for(int i=0;i<s.length();i++)
    {
        for(int j=0;j<s.length();j++)
        {
            int count=0;

            int low=i;

            int high=j;

            string s1=to_string(s[i]);

            string s2=to_string(s[j]);

            while(i!=high && j!=low)
            {
                if(s1==s2)
                {
                    count++;

                    s1=s1+s[i];

                    s2=s[j]+s2;

                    lps.push_back(count);

                    low++;

                    high--;

                    
                }

                else
                {

                    s1=s1+s[i];

                    s2=s[j]+s2;

                    low++;

                    high--;
                }
            }

            
        }

    

        
    }

    for(int x:lps)
    {
        cout<<x<<" ";
    }
}

int main()
{
    string s;

    cin>>s;

    lps_arr(s);

    return 0;
}