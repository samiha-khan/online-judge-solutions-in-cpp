#include <bits/stdc++.h>
using namespace std;
int fiblist[500001];
int const m=100000007;
long long fib(int n){
	if(n<2){
		if(fiblist[n]==0){
			fiblist[n]=n;
		}
		 return n;
	}
	if(fiblist[n]==0){
			fiblist[n]=(fib(n-1)+fib(n-2))%m;
		}
	return fiblist[n];
}
int main() {
	int t,n;
	scanf("%d",&t);
	while(t--){
		scanf("%d",&n);
		if(fiblist[n]==0){
			fiblist[n]=fib(n);
		}
		printf("%ld\n",fiblist[n]);
	}
	return 0;
}
