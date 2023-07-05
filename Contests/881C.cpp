#include<bits/stdc++.h>
using namespace std;
int main(){
   int t=1;
   cin>>t;
   while(t--){
       //Your code starts here
       long long n;
       cin>>n;
       long long sum=n;
       while(n>=1){
        sum+=(n/2);
        n=n/2;
       }
       cout<<sum<<endl;



   }
return 0;
}