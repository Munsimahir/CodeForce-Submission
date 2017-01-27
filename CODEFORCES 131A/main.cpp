/*#include <iostream>
#include<string>
#include<cctype>
using namespace std;

int main()
{
 string input;
 int i=0,j,k,l;
 cin>>input;
if(islower(input[i]))
{
    for(j=1;j<input.length();j++)
    {
        if(!isupper(input[j]))
        {
            k=3;
            break;
        }
    }
    if(k==3)
    cout<<input;
    else
    {
        input[0]=toupper(input[0]);
        for(l=1;l<input.length();l++)
        {
            input[l]=tolower(input[l]);
        }
        cout<<input;
    }
}
else if(isupper(input[i]))
{
      for(j=1;j<input.length();j++)
    {
        if(!isupper(input[j]))
        {
            k=3;
            break;
        }
    }
    if(k==3)
    {
        cout<<input;
    }
     else
    {
         for(l=0;l<input.length();l++)
        {
            input[l]=tolower(input[l]);
        }
        cout<<input;
    }
}

    return 0;
}
*/
#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int x=0,j;
  if(s[0]>='A'&&s[0]<='Z'){///for first condition
       for(int j=1;j<s.length();j++){
        if(s[j]>='A'&&s[j]<='Z') {x++;
        break;
        }
       }
  }
       if(x==0) cout<<s<<endl;
       else{
        for(j=1;j<s.length();j++){
            if(s[j]>='a'&&s[j]<='z'){
                s[j]=s[j]-'a'+'A';
            }
        }
        cout<<s<<endl;
       }

    }
