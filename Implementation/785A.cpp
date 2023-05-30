#include<bits/stdc++.h>
using namespace std;

int checkpoly(char s){
    if(s=='T'){
        return 4;
    }
    else if(s=='C'){
        return 6;
    }
    else if(s=='O'){
        return 8;
    }
    else if(s=='D'){
        return 12;
    }
    else{
        return 20;
    }
}

int main(){
    int n;
    cin>>n;
    int side=0;
    for(int i=0;i<n;i++){
        string s;
        cin>>s;
        side+=checkpoly(s[0]);
    }
    cout<<side;
}