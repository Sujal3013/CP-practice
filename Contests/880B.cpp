#include<bits/stdc++.h>
using namespace std;
int main(){
   int t=1;
   cin>>t;
   while(t--){
       //Your code starts here
       int n,k,g;
       cin>>n>>k>>g;
       int s=k*g,x=ceil(g/2),ans=-1;;
       if(s/n<x){
        if(s%n){
            if((s/n)+1<x){
                ans=s;
            }
            else{
                ans=(s%n)*x;
            }
        }
       }else{
        ans=x;
       }
       cout<<ans<<endl;
   }
return 0;
}