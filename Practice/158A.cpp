#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t = 1;
    // cin >> t;
    while (t--)
    {
        // Your code starts here
        int n,k,count=0;
        cin>>n>>k;
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        for(int i=0;i<n;i++){
            if(arr[i]>=arr[k-1] && arr[i]>0){
                count++;
            }
        }
        cout<<count<<endl;
    }
    return 0;
}