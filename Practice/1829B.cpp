#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n+1],i,l;
        for(i=1;i<=n;i++){
            cin>>arr[i];
        }
        int 
        count=0,max_count=0;
        for(int j=1;j<=n;j++){
            if(arr[j]==0){
                count++;
                max_count=max(max_count,count);
            }else{
                count=0;
            }
        }
        cout<<max_count<<endl;

    }
}