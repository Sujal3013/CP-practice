#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int l,r;
        cin>>l>>r;
        for(int i=l;i<r;i++){
            if((2*l)>r){
                cout<<"-1 -1"<<endl;
                break;
            }
            else{
                cout<<l<<" "<<2*l<<endl;
                break;
            }
        }
        
    }
}