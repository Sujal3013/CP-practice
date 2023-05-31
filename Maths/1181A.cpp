#include<bits/stdc++.h>
using namespace std;

int main(){
    unsigned long long int x,y,z,ans,rem1,rem2,rem=0;
    cin>>x>>y>>z;
    ans=(x/z)+(y/z);
    rem1=x%z;
    rem2=y%z;
    if((rem1+rem2)/z){
        ans+=((rem1+rem2)/z);
        rem=min(z-rem1,z-rem2);
    }
    cout<<ans<<" "<<rem<<endl;
    
}