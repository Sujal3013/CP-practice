#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,l=0;
    cin>>n;
    while(n>0){
        n-=((l+2)*(l+1)/2);
        if(n>=0){
            l++;
        }    
    }
    cout<<l;
}