#include<bits/stdc++.h>
using namespace std;



int main(){
    long long x;
    cin>>x;
    if(x<=4){
        cout<<x<<endl;
        return 0;
    }
    else if(x>=5 &&x<9){
        cout<<9-x<<endl;
        return 0;
    }

    stack<int> s;
    long digits=floor((int)log10(x))+1,ans=0,i=0;
    for(i=0;i<digits;i++){
        int n=(int)(x%10);
        x=floor(x/10);
        int m=9-n;
        if(n>=5){
            if(i==(digits-1) && n==9){
                s.push(n);
            }
            else{
                s.push(m);
            }
        }
        else{s.push(n);}
    }
    while(!s.empty()){
        cout<<s.top();
        s.pop();
    }
    cout<<endl;
    return 0;
}