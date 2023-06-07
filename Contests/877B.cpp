#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n+1],pos_2,pos_1,pos_3;
        for(int i=1;i<=n;i++){
            cin>>arr[i];
            if(arr[i]==1){
                pos_1=i;
            }
            if(arr[i]==2){
                pos_2=i;
            }
            if(arr[i]==3){
                pos_3=i;
            }
        }
        int ans1=pos_1,ans2=pos_2;
        if(abs(pos_1-pos_2)<=2){
            if(n==3 ){
                if(abs(pos_1-pos_2)==1){
                if(pos_1==2 || pos_2==2){
                    ans1=2;
                    ans2=pos_3;
                }
                }
            }
            else{
                if(pos_1<(n/2)){
                    ans1=pos_1;
                    ans2=n;
                }
                else{
                    ans1=pos_1;
                    ans2=1;
                }
            }
        }
        cout<<ans1<<" "<<ans2<<endl;
    }
}