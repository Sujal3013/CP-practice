#include<bits/stdc++.h>
using namespace std;
int main(){
   int t=1;
   cin>>t;
   while(t--){
       //Your code starts here
       int n;
       cin>>n;
       int sum=0,product=1,ops=0,neg=0,pos=0;
       for(int i=0;i<n;i++){
        int x;
        cin>>x;
        if(x==-1){
            neg++;
        }
        else{
            pos++;
        }
        sum+=x;
        product*=x;
       }
       while(neg>pos || neg%2!=0){
        neg--;
        pos++;
        ops++;
       }
       cout<<ops<<endl;

   }
return 0;
}