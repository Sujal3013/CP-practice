#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t = 1;
    cin >> t;
    while (t--)
    {
        // Your code starts here
        int k,n,m;
        cin>>k>>n>>m;
        int a[n],b[m],res[n+m];
       
        int flag=0;
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        for(int i=0;i<m;i++){
            cin>>b[i];
        }
        merge(a,a+n,b,b+m,res);
        for(int x:res){
            k= k+(!x);
            flag= flag | x>k;
        }
        
        if(flag){
            cout<<(-1);
        }
        else{
            for(int x:res){
                cout<<x<<" ";
            }
        }
        cout<<endl;
    }
    return 0;
}