#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        int product=n*m;
        if(n==1){
            for(int i=1;i<=m;i++){
                cout<<i<<" ";
            }
            cout<<endl;
        }
        else if(m==1){
            for(int i=1;i<=n;i++){
                cout<<i<<endl;
            }
        }
        else if(n%2==0 && m%2==0){
            int count=1;
            for(int i=1;i<=n;i++){
                for(int j=1;j<=m;j++){
                    cout<<count<<" ";
                    count+=1;
                }
                cout<<endl;
            }
        }
        else{
            int count=1;
            while(count<=product){
                
            }
        }
    }
}