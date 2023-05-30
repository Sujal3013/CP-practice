#include<bits/stdc++.h>
using namespace std;

int main(){
    string s,ans="";
    cin>>s;
    bool accident=true;
    for(int i=1;i<s.length();i++){
        if(!(s[i]>='A' && s[i]<='Z')){
            accident=false;
        }
    }
    if(accident){
        char tmp=s[0];
        transform(s.begin(), s.end(), s.begin(), ::tolower);
        if(tmp>='A' && tmp<='Z'){
            s[0]=tmp+32;
        }
        else{
            s[0]=tmp-32;
        }
    }
    
    cout<<s<<endl;
    return 0;
}