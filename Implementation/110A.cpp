#include<bits/stdc++.h>
using namespace std;

int main(){
    long long n,count=0;
    cin>>n;
    while(n!=0){
        int x=n%10;
        n=n/10;
        if(x==4 || x==7){
            count++;
        }
    } 
    if(count==4 || count==7){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
}