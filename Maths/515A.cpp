#include<bits/stdc++.h>
using namespace std;

int main(){
    int a,b,n;
    cin>>a>>b>>n;
    a=abs(a);
    b=abs(b);
    int steps=a+b,ans=0;
    
    if(n>=steps && (n-steps)%2==0){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
    
}
