#include<bits/stdc++.h>
using namespace std;

int main(){
    int x1,x2,x3;
    cin>>x1>>x2>>x3;
    int mean=abs((x1+x2+x3)-max(x1,max(x2,x3))-min(x1,min(x2,x3)));
    cout<<abs(x1-mean)+abs(x2-mean)+abs(x3-mean);
    return 0;

}