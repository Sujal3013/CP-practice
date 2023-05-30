#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string s, ans = "YES";
        cin >> s;
        for (int i = 0; i < (n / 2); i++)
        {
            int a = s[i];
            int b = s[n - i - 1];
            if (abs(a - b)!=2 && a!=b)
            {
                ans = "NO";
                break;
            }
        }
        cout << ans << endl;
    }
}