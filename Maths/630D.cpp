#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t = 1;
    // cin >> t;
    while (t--)
    {
        // Your code starts here
        __int64 n;
        cin>>n;
        unsigned long long ans =1+(3*n*(n+1));
        cout<<ans<<endl;
    }
    return 0;
}