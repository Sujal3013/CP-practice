#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    long long a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    long long count=a[n-1],x=a[n-1];
    for(int i=n-2;i>=0;i--){
        x=min(a[i],x-1);
        if(x<0){
            x=0;
        }
        count+=x;
    }
    cout<<count<<endl;
    
}