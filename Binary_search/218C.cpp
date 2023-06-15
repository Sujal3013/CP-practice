#include<bits/stdc++.h>
#define ll long long int
#define pb push_back
using namespace std;
ll nb,nc,ns,i,j,k,l,mid,r,n,pb,ps,pc,b,s,c,ans=0,z=0 ;string st;
 int main(){
cin>>st>>nb>>ns>>nc>>pb>>ps>>pc>>n;
 
for(i=0;i<st.length();i++)if(st[i]=='B')b++; else if(st[i]=='S')s++; else c++;
l=0,r=1e15;
while(l<=r){mid=(l+r)/2;
if( ((max(z,b*mid-nb))*pb+(max(z,c*mid-nc))*pc+(max(z,mid*s-ns))*ps) <=n) 
    ans=mid,l=mid+1;
else r=mid-1;}
  cout<<ans;  
    
return 0;
}
