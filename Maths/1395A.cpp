#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t = 1;
    cin >> t;
    while (t--)
    {
        // Your code starts here
        int arr[4],odd_count=0,sum=0,min_i=INT_MAX;
        for(int i=0;i<4;i++){
            cin>>arr[i];
            sum+=arr[i];
            if(arr[i]%2!=0){
                odd_count+=1;
            }
            if(i<3){
                min_i=min(min_i,arr[i]);
            }
        }
        bool ans=false;
        if(sum%2!=0){
            while(min_i>0){
                for(int i=0;i<4;i++){
                    if(i<3){
                        arr[i]-=1;
                    }
                    else{
                        arr[i]+=3;
                    }
                    if(arr[i]%2==0){
                        odd_count-=1;
                    }
                    else{
                        odd_count+=1;
                    }
                    
                }
                if(odd_count<=1){
                        ans=true;
                        break;
                }
            }
            if(odd_count<=1){
                ans=true;
            }
        }
        else{
            if(odd_count==0 || odd_count==4){
                ans=true;
            }
        }
        if(ans){
            cout<<"Yes"<<endl;
        }
        else{
            cout<<"No"<<endl;
        }

        
    }
    return 0;
}