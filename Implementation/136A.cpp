#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    pair<int,int> a[n];
    for(int i=0;i<n;i++){
        int tmp;
        cin>>tmp;
        a[i].first=tmp;
        a[i].second=i+1;
    }
    sort(a,a+n);
    for(int i=0;i<n;i++){
        cout<<a[i].second<<" ";
    }
}