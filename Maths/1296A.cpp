#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,x,odd_count=0,even_count=0;
        bool flag=false;
        cin>>n;
        for(int i=0;i<n;i++){
            cin>>x;
            if(x%2!=0){
                odd_count++;
            }
            else{
                even_count++;
            }
        }
        if(odd_count!=0 && odd_count%2!=0){
            cout<<"YES"<<endl;
        }
        else if(even_count!=0 && odd_count!=0){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
        
    }
}