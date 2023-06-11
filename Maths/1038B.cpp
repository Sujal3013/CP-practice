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
        if(n<=2){
            cout<<"No"<<endl;
        }
        else{
            cout<<"Yes"<<endl;
            if(n%2==0){
                int i=n/2,j=(n/2)+1;
                cout<<2<<" "<<n-2<<endl;
                while(i>=1){
                    cout<<i<<" "<<j<<" ";
                    i--;j++;
                }
                cout<<endl;
            }
            else{
                cout<<1<<" "<<n-1<<endl;
                cout<<n<<" ";
                for(int i=1;i<n;i++){
                    cout<<i<<" ";
                }
                cout<<endl;

            }
        }
    }
    return 0;
}