#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        //My code here
        int n;
        cin>>n;
        string s,ans="";
        cin>>s;
        for(int i=0;i<s.length();i++){
            char x=s[i];
            for(int j=i+1;j<s.length();j++){
                if(x==s[j]){
                    ans+=s[i];
                    i=j;
                    break;
                }
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}