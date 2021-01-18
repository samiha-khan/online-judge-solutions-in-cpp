#include <bits/stdc++.h>
using namespace std;

int main() {
	int n,x;
	cin>>n;
	while(n--)
	{
	    
	    long long int sum=1;
	    cin>>x;
	    for(int i=2;i*i<=x;i++)
	    {
	        if(x%i==0)
	        {
	            if(i*i==x) sum+=i;
	            else
	            {
	                sum+=i+x/i;
	            }
	        }
	    }
	    if(x==1) cout<<0<<endl;
	    else cout<<sum<<endl;
	}
	return 0;
}
