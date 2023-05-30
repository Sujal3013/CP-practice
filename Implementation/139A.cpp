#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,day=0;
    cin>>n;
    int p[7];
    for(int i=0;i<7;i++){
        cin>>p[i];
    }
    while(n>p[day]){
        n=n-p[day];
        day=(day+1)%7;
    }
    cout<<day+1;
}