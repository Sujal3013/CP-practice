#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int x,y,ans=0;
        cin>>x>>y;
        if(x>3){
            ans=1;
        }
        else{
            if(x==2 || x==3){
                if(y<=3){
                    ans=1;
                }
            }
            else if(x==1 && x==y){
                ans=1;
            }
        }
        if(ans){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
}