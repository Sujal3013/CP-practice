#include <bits/stdc++.h>
using namespace std;

int main()
{
    int k;
    cin >> k;
    string str;
    cin >> str;
    if(k==1){
        cout<<str<<endl;
        return 0;
    }
    map<char,int> s;
    for(int i=0;i<str.length();i++){
        if(s.find(str[i])==s.end()){
            s[str[i]]=1;
        }
        else{
            s[str[i]]++;
        }
    }
    string ans="";
    for(auto i:s){
        if((i.second)%k!=0){
            cout<<"-1"<<endl;
            return 0;
        }else{
            i.second=(i.second/k);
            while(i.second--){
                char tmp=i.first;
                ans+=tmp;
            }
        }
    }
    while(k--){
        cout<<ans;
    }
    
}