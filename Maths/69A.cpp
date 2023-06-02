#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,x=0,y=0,z=0;
    cin>>n;
    while(n--){
        int i,j,k;
        cin>>i>>j>>k;
        x+=i;
        y+=j;
        z+=k;
    }
    if(x==0 && y==0 && z==0){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }

}