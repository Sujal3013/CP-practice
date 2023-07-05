#include<iostream> 
#include<bits/stdc++.h>
 
using namespace std;
double n,b,m,s,a[110];
int main(){
	cin>>n>>b;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		m=max(a[i],m);
		s+=a[i];
	}
	if(b+s<m*n){
		printf("-1");
	}
	else{
	    for(int i=1;i<=n;i++){
	        printf("%.6lf\n",(b+s)/n-a[i]);
        }
    }
	return 0;
}