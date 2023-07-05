#include<bits/stdc++.h>
using namespace std;

#define int long long

void sol(){
    int n;
    cin>>n;

    vector<int> a;
    int count=0,ans=0;

    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        if(x==0) continue;
        a.push_back(x);
        count+=abs(x);
    }

    int f=0;
    for(int i:a){
        if(i<0){
            if(f==0){
                ans++;
                f=1;
            }
        }
        else{
            f=0;
        }
    }
    cout<<count<<" "<<ans<<endl;
}

signed main(){
    int t;
    cin>>t;
    while(t--){
        sol();
    }
    return 0;
}