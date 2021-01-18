#include <bits/stdc++.h>
using namespace std;

int main() {
	int t,n,a,k,ans,b,i;
	scanf("%d",&t);
	for(i=1;i<=t;i++){
		ans=0;
		cin>>n>>a;
		b=n;
		while(b--){
			cin>>k;
			ans+=k;
		}
		n++;
		ans=n*a-ans;
		cout<<"Case "<<i<<": "<<ans<<endl;
	}
	return 0;
}
