#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t = 1;
    cin >> t;
    while (t--)
    {
        // Your code starts here
        int a,b,c,x,y;
        cin>>a>>b>>c;
        x=pow(10,a-1);
        if(b!=1){
            y=pow(10,b-1)+pow(10,c-1);
        }
        else{
            y=1;
        }
        cout<<x<<" "<<y<<endl;

    }
    return 0;
}