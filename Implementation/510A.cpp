#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,m;
    bool flag=true;
    cin>>n>>m;
    for(int i=0;i<n;i++){
        if(i%2==0){
            for(int j=0;j<m;j++){
                cout<<"#";
            }
            cout<<endl;
        }
        else{
            if(flag){
                flag=false;
                for(int k=0;k<(m-1);k++){
                    cout<<".";
                }
                cout<<"#"<<endl;
                
            }
            else{
                flag=true;
                cout<<"#";
                for(int k=0;k<(m-1);k++){
                    cout<<".";
                }
                cout<<endl;
                
            }
        }
    }
}