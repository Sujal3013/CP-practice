#include<bits/stdc++.h>
using namespace std;

int main(){
    int t,x_side=0,yside=0,xmax=INT_MIN,xmin=INT_MAX,ymax=INT_MIN,ymin=INT_MAX;
    cin>>t;
    while(t--){
        int xm,ym;
        cin>>xm>>ym;
        int p;
        for(int i=0;i<2;i++){
            cin>>p;
            for(int i=0;i<p;i++){
            int x;
            cin>>x;
            xmin=min(x,xmin);
            xmax=max(x,xmax);
            x_side=max(x_side,xmax-xmin);
        }
        }
        for(int i=0;i<2;i++){
            cin>>p;
            for(int i=0;i<p;i++){
            int y;
            cin>>y;
            ymin=min(y,ymin);
            ymax=max(y,ymax);
            yside=max(yside,ymax-ymin);
        }
        }
        cout<<max(x_side*ym,yside*xm)<<endl;
        
    }
}