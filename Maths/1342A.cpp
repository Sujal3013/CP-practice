#include<iostream>
using namespace std;
main(){
	long long t,a,b,x,y,p,q;
	for(cin>>t;t--;){
		cin>>x>>y>>a>>b;
		p=b*min(x,y)+a*abs(x-y);
		q=(x+y)*a;
		cout<<min(p,q)<<endl;
	}
}