#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t = 1;
    // cin >> t;
    while (t--)
    {
        // Your code starts here
        long long n,ans=0;
        cin>>n;
        ans=2*(pow(2,n)-1);
        cout<<ans<<endl;
    }
    
    return 0;
}