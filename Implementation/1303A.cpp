#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        int i=s.find_first_of("1");
        int l=s.rfind('1');
        int count=0;
        while(i<l){
            if(s[i]=='0'){
                count++;
            }
            i++;
        }
        cout<<count<<endl;
    }
}