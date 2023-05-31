#include<bits/stdc++.h>
using namespace std;

int main(){

        int k,r;
        cin>>k>>r;
        int o=k%10;
        int ans=0;
        bool flag=false;
        if(o==0){
            ans=1;
        }
        else if(o==5){
            if(r==5){
                ans=1;
            }
            else{
                ans=2;
            }
        }
        else{
            for(int i=1;i<=10;i++){
                if((o*i)%10==r){
                    ans=i;
                    flag=true;
                    break;
                }
            }
            if(!flag){
                if(o%2==0){
                    ans=5;
                }
                else{
                    ans=10;
                }
            }
        }
        cout<<ans<<endl;
}