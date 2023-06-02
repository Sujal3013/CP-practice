#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    if(n%2!=0){
        cout<<0<<endl;
    }
    else{
        int count=-1;
        int x=0;
        while(x<n/2){
            x=x+2;
            count++;
        }
        cout<<count<<endl;
    }
}