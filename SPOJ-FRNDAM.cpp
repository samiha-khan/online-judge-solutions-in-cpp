#include <bits/stdc++.h>
using namespace std;

	

int main() {
	
	int x,t,y;
	cin>>t;
	while(t--){
		cin>>x>>y;
		int xs=1,ys=1;
		for(int i=2; i*i<=x;i++){
			if(x%i==0){
				if((x/i)==i){
					xs+=i;
				}
				else{
					
					xs=xs+i+x/i;
				}
			}
		}
		for(int i=2; i*i<=y;i++){
			if(y%i==0){
				if((y/i)==i){
					
					ys+=i;
				}
				else{
					ys=ys+i+y/i;
				}
			}
		}
		if(xs==y&&ys==x){
			cout<<"Friendship is ideal\n";
		}
		else{
			
			cout<<"Friendship is not ideal\n";
		}
	}
	return 0;
}
