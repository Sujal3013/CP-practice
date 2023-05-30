#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int sum=0;
        int digits=(int)(floor(log10(n)+1));
        if(digits==1){
            cout<<"1"<<endl;
            cout<<n<<endl;
            continue;
        }
        string s="";
        for(int i=0;i<digits;i++){
            int x=n%10;
            if(x!=0){
                sum+=1;
                s+=to_string((int)(ceil(x*pow(10,i))));
                s+=" ";
            }
            n=n/10;
        }
        cout<<sum<<endl;
        cout<<s<<endl;
   }
}