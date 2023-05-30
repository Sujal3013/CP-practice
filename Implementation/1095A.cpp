#include<bits/stdc++.h>
using namespace std;

int main(){
    int t,count=0,i=0;
    cin>>t;
    string s;
    cin>>s;
    while(i<(t)){
        cout<<s[i];
        count++;
        i+=count;
    }
}