#include <bits/stdc++.h>
using namespace std;

int get_min_max(int n){
    int maxi=INT_MIN,mini=INT_MAX;
    int digits=(int)(log10(n)+1);
    while(digits>0){
        int x=n%10;
        maxi=max(maxi,x);
        mini=min(mini,x);
        n=n/10;
        digits--;
    }
    return maxi*mini;
} 

int main()
{
    int t = 1;
    cin >> t;
    while (t--)
    {
        long long int n,k;
		cin>>n>>k;
		k-=1;
		while(k--){
			int max=0,min=9;
			long long int num=n;
			while(num){
				int a=num%10;
				if(max<a){
					max=a;
				}
				if(min>a){
					min=a;
				}
				num/=10;
			}
			if(min==0) break;
			n=n+max*min;
		}
		cout<<n<<endl;
        
    }
    return 0;
}