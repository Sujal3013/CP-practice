#include<bits/stdc++.h>
using namespace std;

int main(){
    string v="AOYEUIaoyeui",in;
    cin>>in;
    for(int i=0;i<in.length();i++){
        if(v.find(in[i]) != std::string::npos){
            continue;
        }
        else if(in[i]>='A' && in[i]<='Z'){
            in[i]=in[i]+32;
            cout<<"."<<in[i];
        }
        else{
            cout<<"."<<in[i];
        }
    }
    
}