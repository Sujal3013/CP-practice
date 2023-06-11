#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t = 1;
    cin >> t;
    while (t--)
    {
        // Your code starts here
        int a,b,c;
        cin>>a>>b>>c;
        int sum=a+b+c;
        if((sum%9==0) && min(a,(min(b,c)))>=(sum/9)){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}