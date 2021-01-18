#include <bits/stdc++.h>
using namespace std;

int main() {
	long long int x;
	scanf("%lld",&x);
	if(x%10==0){
		printf("2\n");
	}
	else{
		printf("1\n");
		printf("%d\n",x%10);
	}
	return 0;
}
