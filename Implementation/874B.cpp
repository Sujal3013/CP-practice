#include<bits/stdc++.h>
using namespace std;


// int main(){
//     int t;
//     cin>>t;
//     while(t--){
//         int n,k;
//         cin>>n>>k;
//         int a[n],b[n];
//         for(int l=0;l<n;l++){
//             cin>>a[l];    
//         }
//         for(int l=0;l<n;l++){
//             cin>>b[l];    
//         }
//         for(int i=0;i<n;i++){
//             for(int j=i;j<n;j++){
//                 if((abs(a[i]-b[j]))<=k){
//                     if(i!=j){
//                         int temp=b[i];
//                         b[i]=b[j];
//                         b[j]=temp;
//                         continue;
//                     }
//                     else{
//                         break;
//                     }
//                 }
//                 else{
//                     continue;
//                 }
//             }
//         }
//         for(int z=0;z<n;z++){
//             cout<<b[z]<<" ";
//         }
//         cout<<endl;
//     }
    
// }

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        pair<int,int> a[n];
        int b[n],c[n];
        for(int i=0;i<n;i++){
            int x;
            cin>>x;
            a[i].first=x;
            a[i].second=i;
        }
        for(int i=0;i<n;i++){
            cin>>b[i];
        }
        sort(a,a+n);
        sort(b,b+n);
        for(int i=0;i<n;i++) c[a[i].second]=i;
		for(int i=0;i<n;i++){
			cout<<b[c[i]]<<' ';
		}
        cout<<endl;
    }
}