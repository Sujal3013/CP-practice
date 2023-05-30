#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        float n;
        float curr;
        cin>>n;
        curr=ceil((n+n-1)/2);
        cout<<2<<endl;
        cout<<curr<<" "<<n-1<<endl;
        n=n-2;
        while(!(curr<3)){
            cout<<curr<<" "<<n<<endl;
            curr=ceil((curr+n)/2);
            n=curr-2;
        }
        
    }
}