#include <bits/stdc++.h>
using namespace std;

bool past(int arr[], int i, int x)
{
    for(int j=i-1;j>=i-x;j--){
        if(arr[j]<=arr[i]){
            return false;
        }
    }
    return true;
}
bool forward(int arr[], int i, int y)
{
    for(int j=i+1;j<=i+y;j++){
        if(arr[j]<=arr[i]){
            return false;
        }
    }
    return true;
}
int main()
{
    int n, x, y;
    cin >> n >> x >> y;
    int a[n+2];
    for (int i = 1; i < n+1; i++)
    {
        cin >> a[i];
    }
    a[0]=INT_MAX;
    a[n+1]=INT_MAX;
    bool flag;
    for(int i=1;i<=x;i++){
        flag=true;
        for(int j=0;j<i;j++){
            if(a[j]<=a[i] || !forward(a,i,y)){
                flag=false;
                break;
            }
        }
        if(flag){
            cout<<i<<endl;
            return 0;
        }
    }

    for(int i=x+1;i<=n-y;i++){
        if(past(a,i,x) && forward(a,i,y)){
            cout<<i<<endl;
            return 0;
        }
    }

    for(int i=n-y+1;i<n+1;i++){
        flag=true;
        for(int j=i+1;j<=n+1;j++){
            if(a[j]<=a[i] || !past(a,i,x)){
                flag=false;
                break;

            }
        }
        if(flag){
            cout<<i<<endl;
            return 0;
        }
    }
    
    
}

// 10 2 2
// 10 9 6 7 8 3 2 1 4 5
