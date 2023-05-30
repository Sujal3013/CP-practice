#include<bits/stdc++.h>
using namespace std;
 
int n,a[200005];
 
void sol()
{
	cin>>n;
	for(int i=0;i<n;i++) cin>>a[i];
	sort(a,a+n);
	for(int i=1;i<n;i++)
	{
		if(a[0]%2==0&&a[i]%2)
		{
			puts("NO");
			return;
		}
	}
	puts("YES");
}
 
int main()
{
	int t;
	cin>>t;
	while(t--) sol(); 
 	return 0;
}