#include<bits/stdc++.h>
using namespace std;
int t,n,m;char s[100001];
main(){
	cin>>t;while(t--){
		cin>>n;scanf("%s",s+1);int ans=0,maxx=0;
		for(int i=1;i<=n;i++){
			if(s[i]==s[i-1])ans++;
			else maxx=max(maxx,ans),ans=0;
		}maxx=max(maxx,ans);
		printf("%d\n",maxx+2);
	}
	return 0;
}