#include<bits/stdc++.h>
using namespace std;

int main(){
    unsigned long long int n,m,k,x,y,z,ans;
    cin>>n>>m>>k;
    long long int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    sort(arr,arr+n);
    x=m/(k+1);
    y=m%(k+1);
    z= k*(arr[n-1])+1*(arr[n-2]);
    ans=(x*z) + y*arr[n-1];
    cout<<ans<<endl;
}