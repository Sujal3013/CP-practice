#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t = 1;
    cin >> t;
    while (t--)
    {
        // Your code starts here
        int n,k;
        cin>>n>>k;
        vector<pair<int,int>> v(n);
        for(int i=0;i<n;i++){
            cin>>v[i].first;
            v[i].second=i;
        }
        sort(v.begin(),v.end());
        int min_split=1;
        for(int i=1;i<n;i++){
            if(v[i-1].second+1!=v[i].second){
                min_split++;
            }
        }
        if(min_split<=k){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}