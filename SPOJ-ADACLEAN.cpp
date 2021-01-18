#include <bits/stdc++.h>
using namespace std;


int main() {
	int t,n,k;
	scanf("%d",&t);
	for(int i=1;i<=t;i++){
		scanf("%d%d",&n,&k);
		string s;
		cin>>s;
		set<string>myset;
		for(int j=0;j<=n-k;j++){
			string t=s.substr(j,k);
			myset.insert(t);
		}
		printf("%d\n",myset.size());
	}
	return 0;
}
