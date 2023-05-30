#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,k;
    cin>>n>>k;
    pair<int,int> a[n];
    for(int i=0;i<n;i++){
        int tmp;
        cin>>tmp;
        a[i].first=tmp;
        a[i].second=i+1;
    }
    sort(a,a+n);
    int ins=0,x=0;
    for(auto i:a){
        if((i.first+ins)<=k){
            ins+=i.first;
            x++;
            
        }
        else{
            break;
        }
    }
    cout<<x<<endl;
    if(x!=0){
        for(int j=0;j<x;j++){
        cout<<a[j].second<<" ";
    }
    }
    
}