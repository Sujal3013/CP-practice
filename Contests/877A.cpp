#include<bits/stdc++.h>
using namespace std;


int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n],ans;
        bool flag=false;
        for(int i=0;i<n;i++){
            int x;
            cin>>x;
            arr[i]=x;
        }
        sort(arr,arr+n);
        if(arr[0]<0){
            cout<<arr[0]<<endl;
        }
        else{
            cout<<arr[n-1]<<endl;
        }
    }
}