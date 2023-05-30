#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,k,w,i=1,sum=0;
    cin>>k>>n>>w;
    while(i<=w){
        sum+=i*k;
        i++;
    }
    if(sum>n){
        cout<<sum-n;
    }
    else{
        cout<<0;
    }
}