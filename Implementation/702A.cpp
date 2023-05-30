#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int a[n];
    cin>>a[0];
    int max_count=1,count=1;
    for(int i=1;i<n;i++){
        cin>>a[i];
        if(a[i]>a[i-1]){
            count+=1;
        }
        else{
            count=1;    
        }
        max_count=max(max_count,count);
    }
    cout<<max_count<<endl;
}