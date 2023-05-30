#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,k;
    cin>>n>>k;
    int a[n+1],i=1;
    for(int i=1;i<=n;i++){
        cin>>a[i];
    }
    while(!(i>=k)){
        i=i+a[i];
    }
    if(i!=k){
        cout<<"NO"<<endl;
    }
    else{
        cout<<"YES"<<endl;
    }
    return 0;
}