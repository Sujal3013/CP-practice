#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,i=1,sum=0;
    cin>>n;
    while(i<n){
        sum+=(i*(n-i)); //Wrong attempts
        i++;
    }
    sum+=n; //Correct attempts
    cout<<sum<<endl;
    
}