#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t = 1;
    // cin >> t;
    while (t--)
    {
        // Your code starts here
        int n,x=0,sum=0,coins=0;
        cin>>n;
        for(int i=0;i<n;i++){
            int y;
            cin>>y;
            if((x-y+sum)<0){
                coins+=abs(x-y+sum);
                sum=0;
            }
            else{
                sum+=(x-y);
            }
            x=y;
        }
        cout<<coins<<endl;
    }
    return 0;
}