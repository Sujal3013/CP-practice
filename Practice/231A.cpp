#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,count=0;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        int x,y,z;
        cin>>x>>y>>z;
        arr[i]=x+y+z;
        if(arr[i]>=2){
            count++;
        } 
    }
    cout<<count<<endl;
}