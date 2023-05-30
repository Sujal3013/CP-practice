#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,M,E;
    cin>>n;
    bool flag=true;
    if(n%2==0){
        M=n;
        E=n-1;
    }
    else{
        M=n-1;
        E=n;
    }
    while(n>0){
        if(flag){
            n=n-M;
            flag=false;
        }
        else{
            n=n-E;
            flag=true;
        }
    }
    if(flag){
        cout<<"Ehab"<<endl;
    }
    else{
        cout<<"Mahmoud"<<endl;
    }


}