#include<bits/stdc++.h>
using namespace std;
#define int long long
const int N = 1e7 + 10;
const int M = 1e9+7;
int b[N];
 
signed main(){
	int t;
	cin>>t;
	while(t--){
		int x,y,z;
			int ttt=1;
			int ans1=0;
			int time1=0;
		cin>>y>>x>>z;
	
		for(int i=0;i<y;i++)
		{	
			for(int j=0;j<x;j++)
			{
				cin>>b[j];
			}
			sort(b,b+x);
		
			int ans=0;
			int time=0;
			for(int j=0;j<x;j++){
				if(j!=0) b[j]+=b[j-1];
				 if(b[j]<=z){
				 	ans++;
				 	time+=b[j];
				 } 
			}
			if(i==0) ans1=ans,time1=time;
			else{
				if(ans>ans1) ttt++;
				else if(ans==ans1&&time<time1) ttt++;
			}
	
	
		}
			cout<<ttt<<endl;
	}
	return 0;
} 