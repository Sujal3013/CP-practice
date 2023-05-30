#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int half=n/2;
        if(half%2!=0){
            cout<<"NO"<<endl;
        }
        else{
            cout<<"YES"<<endl;
            for(int i=1;i<=half;i++){
                cout<<i*2<<" ";
            }
            for(int i=1;i<half;i++){
                cout<<2*i - 1<<" ";
            }
            cout<<n+(half-1)<<endl;
        }

    }
}