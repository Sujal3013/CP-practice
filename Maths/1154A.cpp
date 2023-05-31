#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr[4],x,y;
    for (int i = 0; i < 4; i++)
    {
        cin >> arr[i];
    }
    sort(arr,arr+4);
    int abc=arr[3];
    x=abc-arr[0];
    y=abc-arr[1];
    cout<<x<<" "<<y<<" "<<abc-x-y<<endl;
}