#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        unsigned long long int n;
        cin>>n;
        if((n/14) && (n%14>=1 && n%14<=6)){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
}