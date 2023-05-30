#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        set<string> strset;
        cin>>s;
        for(int i=0;i<n-1;i++){
            string temp=s.substr(i,2);
            strset.insert(temp);
        }
        cout<<strset.size()<<endl;
    }
}