#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
cin>>t;
while(t--){
int n,m,ans=0;
cin>>n>>m;
for(int i=0;i<n;i++)
{string s;
cin>>s;
if(s[s.length()-1]=='R')
ans++;
if(i==n-1)
{for(int i=0;i<s.length();i++)
 {if(s[i]=='D')
  ans++;
 }
}
}
cout<<ans<<endl;
}
 
}
