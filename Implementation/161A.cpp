#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr[5][5];
    int i,j;
    for(i=1;i<=5;i++){
        for(j=1;j<=5;j++){
            int x;
            cin>>x;
            if(x==1){
                goto result;
            }
        }
    }
    result:int ans=abs(i-3)+abs(j-3);
    cout<<ans;
    return 0;
}