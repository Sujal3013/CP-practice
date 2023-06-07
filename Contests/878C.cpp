#include<bits/stdc++.h>
using namespace std;

int factorial(int n){
    int fact=1;
    for(int i=1;i<=n;i++){
        fact*=i;
    }
    return fact;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        long long n,k,q;
        cin>>n>>k>>q;
        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        long long count=0,curr_count=0,prev=0;
        for(int i=0;i<n;i++){
            if(a[i]<=q){
                curr_count++;
                if((curr_count-prev)>=k){
                    count+=(curr_count-prev)-k+1;
                }
            }
            else{
                    prev=0;
                    curr_count=0;
                }
            
        }
        cout<<count<<endl;

    }
}