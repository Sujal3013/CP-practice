#include<bits/stdc++.h>
using namespace std;



int main(){
    string s1,s2;
    cin>>s1>>s2;
    int h1=10*(s1[0]-'0') + (s1[1]-'0');
    int m1=10*(s1[3]-'0') + (s1[4]-'0');
    int h2=10*(s2[0]-'0') + (s2[1]-'0');
    int m2=10*(s2[3]-'0') + (s2[4]-'0');
    if(h1==h2){
        m1+=(m2-m1)/2;
    }
    else if(m2>=m1){
        
        int tmp3=((60*(h2-h1))+(m2-m1))/2;
        int tmp4=((m1+tmp3)%60);
        int tmp5=(m1+tmp3)/60;
        m1=tmp4;
        h1+=tmp5;
    }
    else{
        int tmp1=60-m1;
        int tmp2=m2+tmp1;
        int tmp3=60*(h2-h1-1);
        int tmp4=(tmp2+tmp3)/2;
        int tmp5=((m1+tmp4)%60);
        int tmp6=((m1+tmp4)/60);
        m1=tmp5;
        h1+=tmp6;

    }
    if(h1<10){
            cout<<"0"<<h1<<":";
        }
        else{
            cout<<h1<<":";
        }
        if(m1<10){
            cout<<"0"<<m1<<endl;
        }
        else{
            cout<<m1<<endl;
        }
    
    
}