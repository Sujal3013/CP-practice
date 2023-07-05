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
        cin >> n;
        string ans = "YES";
        vector<int> v(101, 0), a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            v[a[i]]++;
        }
        if (v[0] == n)
        {
            ans="Yes";
        }
        else if(
            v[0]==0
        ){
            ans="No";
        }
        else
        {
            sort(a.begin(), a.end());
            for (int i = v[0]; i < n; i++)
            {
                if (v[a[i]] <= v[a[i]-1])
                {
                    continue;
                }
                else
                {
                    ans = "NO";
                    break;
                }
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}