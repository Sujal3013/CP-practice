#include<bits/stdc++.h>
using namespace std;



int main(){
    int n,m,count=0;
    cin>>n>>m;
    if(n==m){
        cout<<count<<endl;
        return 0;
    }
    int div=m/n;
    int rem=m%n;
    if(rem){
        cout<<"-1"<<endl;
        return 0;
    }
    else if(div%2==0 || div%3==0){
        while(div%6==0){
            div=div/6;
            count+=2;
        }
        while(div%3==0){
            div=div/3;
            count+=1;
        }
        while(div%2==0){
            div=div/2;
            count+=1;
        }
        
    }
    if(div!=1){
            cout<<"-1"<<endl;
            return 0;
        }
        else{
            cout<<count<<endl;
            return 0;
        }
}