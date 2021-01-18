#include <bits/stdc++.h>
using namespace std;

int main() {
	int c,temp,i=1;
	long long int n,N,k;
    scanf("%d",&c);
    while(i<=c)
    {
        scanf("%lld",&n);
        temp=0;
        N=sqrt(n);
        for(long long int j=0;j<=N;j++)
        {
           k=(long long int)round(sqrt(n-j*j));
           if(j*j+k*k==n)
           {
               printf("Yes\n");
               temp=1;
               break;
           }
           
        }
        if(temp==0){
        	printf("No\n");
        }
        i++;
    }
	return 0;
}
