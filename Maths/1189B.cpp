#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t = 1;
    // cin >> t;
    while (t--)
    {
        // Your code starts here
        int n;
        cin>>n;
        int arr[n+1];
        arr[0]=0;
        for(int i=1;i<=n;i++){
            cin>>arr[i];
        }
        sort(arr+1,arr+n+1);
        if(arr[n]>=(arr[n-1]+arr[n-2])){
            cout<<"NO"<<endl;
        }
        else{
            swap(arr[n],arr[n-1]);
            swap(arr[n-2],arr[n]);
            cout<<"YES"<<endl;
            for(int i=1;i<=n;i++){
                cout<<arr[i]<<" ";
            }
        }

        
    }
    return 0;
}