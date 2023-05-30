#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin>>s;
    for(int i=0;i<5;i++){
        string tmp;
        cin>>tmp;
        if(tmp[0]==s[0] || tmp[1]==s[1]){
            cout<<"YES"<<endl;
            return 0;
        }
    }
    cout<<"NO"<<endl;
    return 0;
}