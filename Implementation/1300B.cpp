#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int size=2*n;
        int a[size+1];
        for(int i=1;i<=size;i++){
            cin>>a[i];
        }
        sort(a+1,a+size+1);
        cout<<abs(a[size/2]-a[(size/2)+1])<<endl;
    }
}