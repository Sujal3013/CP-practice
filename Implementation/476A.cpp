#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,m;
    cin>>n>>m;
    if(n<m){
        cout<<"-1"<<endl;
        return 0;
    }
    if(m==1){
        cout<<n/2<<endl;
        return 0;
    }
    if(n==m){
        cout<<n<<endl;
        return 0;
    }
    int step=(n/2),rem=n%2,i=1;
    while((step+rem)%m!=0 && step>0){
        step=step+(2)-(1);
        i++;
    }
    if(step<0){
            cout<<"-1"<<endl;
            return 0;
    }
    cout<<step+rem<<endl;

}