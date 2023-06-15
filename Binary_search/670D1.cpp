#include <bits/stdc++.h>
using namespace std;

int count(int a[],int b[],int n,int mid){
    int sum=0;
    for(int i=0;i<n;i++){
        sum+=max(0,(a[i]*mid)-b[i]);
    }
    return sum;
}

int main()
{
    int t = 1;
    // cin >> t;
    while (t--)
    {
        // Your code starts here
        int n,k;
        cin>>n>>k;
        int a[n],b[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        for(int i=0;i<n;i++){
            cin>>b[i];
        }
        int ans=0;
        while(k>0){
            for(int i=0;i<n;i++){
                b[i]=b[i]-a[i];
                if(b[i]<0){
                    k+=b[i];
                    b[i]=0;
                }
            }
            if(k<0){
                break;
            }
            else{
                ans++;
            }
            
        }
        cout<<ans<<endl;


    }
    return 0;
}