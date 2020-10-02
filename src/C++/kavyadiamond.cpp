#include<bits/stdc++.h>
using namespace std;
int main()
{
int r,s;
cout<<" Enter the number of rows: ";
cin>>r;
s=r-1;
for(int k=1;k<=r;k++)
{
    for(int c=1;c<=s;c++)
  {
      cout<<" ";	
  }
  s--;
  for(int c=1;c<=2*k-1;c++)
  {
      cout<<"*";
  }
  cout<<"\n";
}
s=1;
for(int k=1;k<=r-1;k++)
{
    for (int c=1;c<=s;c++)
    {
      cout<<" "; 
    }
  s++;
  for (int c=1 ;c<=2*(r-k)-1;c++)
  {
    cout<<"*";
  }
  cout<<"\n";
}
return 0;
}
