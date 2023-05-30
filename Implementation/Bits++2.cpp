#include<iostream>
using namespace std;

int main(){
    int X=0;
    int n;
    cin>>n;
    for(int i=0;i<=n;i++){
        string s;
        getline(cin,s);
        if(s=="++X" || s=="X++"){
            X+=1;
        }
        else if(s=="--X" || s=="X--"){
            
            X-=1;
        }

    }
    cout<<X<<endl;
}