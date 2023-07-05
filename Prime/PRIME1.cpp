#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t = 1;
    cin >> t;
    while (t--)
    {
        // Your code starts here
        int m,n;
        cin>>n>>m;
        vector<bool> v(max(m,n)+1,1);
        v[0]=v[1]=false;
        for(int i=2;i<v.size();i++){
            if(v[i]==true){
                for(int j=2*i;j<v.size();j+=i){
                    v[j]=false;
                }
            }
        }
        for(int i=min(m,n);i<v.size();i++){
            if(v[i]==true){
                cout<<i<<" ";
            }
            
        }
        cout<<endl;
    }
    return 0;
}