#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        float n,k;
        cin>>n>>k;
        if(k==1){
            cout<<n<<endl;
        }
        else{
            int count=0;
            for(int i=2;i<=n;i+=k){
                count++;
            }
            count++;
            cout<<count<<endl;
        }
    }
}