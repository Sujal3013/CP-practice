#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,mx=0,x=0;
    cin>>n;
    while(n--){
        int a,b;
        cin>>a>>b;
        x=x-a+b;
        mx=max(mx,x);
    }
    cout<<mx<<endl;

}