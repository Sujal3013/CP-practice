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
        vector<int> a(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        sort(a.begin(),a.end());
        int l=0,r=a.size()-1,cost=0;
        while(l<r){
            cost+=(a[r]-a[l]);
            l++;
            r--;
        }
        cout<<cost<<endl;
    }
    return 0;
}