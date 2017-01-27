#include <iostream>

using namespace std;

int main()
{
  string name,temp;
  cin>>name;
  int c=0;
  temp=name;
  for(int i=0;i<name.length();i++)
  {
      for(int j=i;j<name.length();j++)
      {
          if(temp[i]==name[j+1])
          {
              c=c+1;
              continue;
          }
      }
  }
  cout<<c;
    return 0;
}
