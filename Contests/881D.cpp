#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t = 1;
    cin >> t;
    while (t--)
    {
        // Your code starts here
        int n;
        cin>>n;
        vector<pair<int,int>> a(n+1);
        for(auto i:a){
            i.first=0;
            i.second=0;
        }
        for(int i=1;i<=n-1;i++){
            int u,v;
            cin>>u>>v;
            if(u>v){swap(u,v);}
            if(a[u].first==0){
                a[u].first=v;
            }
            else{
                a[u].second=v;
            }
        } 
        int ans[2][n+1];   
        int q;
        cin>>q;
        while(q--){
            int x,y;
            cin>>x>>y;
            queue<int> one;
            one.push(x);
            while(!one.empty()){
                int p=one.front();
                one.pop();
                if(a[p].first!=0){
                    one.push(a[p].first);
                    continue;
                }
            }

        }
    }
    return 0;
}