#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin>>s;
    set<char> c;
    if(s.length()==1){
        cout<<"IGNORE HIM!"<<endl;
    }
    for(int i=0;i<s.length();i++){
        c.insert(s[i]);
    }
    if((c.size()%2)==0){
        cout<<"CHAT WITH HER!"<<endl;
    }
    else{
        cout<<"IGNORE HIM!"<<endl;
    }
}