#include<iostream>
using namespace std;
int main()
{
string s;
cin>>s;
int len=s.size();int x=len;
if(x%2)
for(int i=len-1; i>0;i--)
{
if(s[i]=='1'){
x++;
break;}
}
cout<<x/2;
return 0;
}