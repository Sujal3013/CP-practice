#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int x,y,n;
        cin>>x>>y>>n;
        if(n%x<y){
            n=(n/x)*x;
            n=n-(x-y);
        }
        else{
            n=n-((n%x)-y);
        }
        
        cout<<n<<endl;
    }
}