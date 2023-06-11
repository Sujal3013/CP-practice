#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t = 1;
    //    cin>>t;
    while (t--)
    {
        // Your code starts here
        string s,rev="";
        cin>>s;
        for(int i=s.length()-1;i>=0;i--){
            rev+=s[i];
        }
        cout<<s<<rev<<endl;

    }
    return 0;
}