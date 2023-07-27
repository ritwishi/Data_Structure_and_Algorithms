/*

string reverseWords(string S) 


   { 
       // code here
       string result="";
       string temp="";
       for(int i=S.length()-1;i>=0;i--)
       {  if(S[i]=='.')
            {
                temp=temp+S[i];
                result+=temp;
                temp="";
            }
           else
            { string s=S[i]+temp;
             temp=s;
            }
       }
       result=result+temp;
       return result;
   } 
*/