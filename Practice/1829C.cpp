#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,ans=-1,t=20000000,o=20000000,e=20000000;
        cin>>n;
        for(int i=1;i<=n;i++){
            int x;
            string y;
            cin>>x>>y;
            if(y=="01"){
                o=min(o,x);
            }
            else if(y=="10"){
                t=min(t,x);
            }
            else if(y=="11"){
                e=min(e,x);
            }
        }
        if((e!=20000000) || (t!=20000000 && o!=20000000)){
            ans=min(e,t+o);
        }
        cout<<ans<<endl;
        
    }
}