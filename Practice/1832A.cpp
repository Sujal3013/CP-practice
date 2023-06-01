#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s, ans;
        cin >> s;
        if (s.length() <= 3)
        {
            ans = "NO";
        }
        else
        {
            set<char> sch;
            for (int i=0;i<s.length();i++)
            {
                if(s.length()%2!=0){
                    if(i!=s.length()/2){
                    sch.insert(s[i]);
                    }
                }
                else{
                    sch.insert(s[i]);
                }
            }
            if (sch.size() >= 2)
            {
                ans = "YES";
            }
            else
            {
                ans = "NO";
            }
        }

        cout<<ans<<endl;
    }
}