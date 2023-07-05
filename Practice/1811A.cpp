#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t = 1;
    cin >> t;
    while (t--)
    {
        // Your code starts here
        int n, d, i = 0;
        bool flag = true;
        cin >> n >> d;
        string s, ans = "";
        cin >> s;
        if (d <= s[n - 1])
        {

            ans += s;
            ans += to_string(d);
        }
        else if (d >= s[0])
        {
            ans += to_string(d);
            ans += s;
        }
        else
        {
            for (i = 0; i < n; i++)
            {
                if ((s[i] - '0' )<= d && flag)
                {
                    flag = false;
                    ans += to_string(d);
                    ans += s[i];
                }
                else
                {
                    ans += s[i];
                }
            }
        }

        cout << ans << endl;
    }
    return 0;
}