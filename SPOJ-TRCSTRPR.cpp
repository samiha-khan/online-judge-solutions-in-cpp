    #include <bits/stdc++.h>
    using namespace std;
    bool kata[1000000+5];
    void seive(){
     
    	kata[0]=kata[1]=1;
    	for(int i=2;i*i<=1000000+5;i++){
    		if(!kata[i]){
    			for(int j=i*i;j<=1000000+5;j+=i){
    				kata[j]=1;
    			}
    		}
    	}
     
    }
    int main() {
    	seive();
    	string a;
    	int x,t;
    	cin>>t;
    	bool flag=true;
    	while(t--){
    		bool flag=true;
    		cin>>a>>x;
    		for(int i=0;i<a.size();i++){
    			int idx = (int) a[i];
    			if(!kata[idx+x]){
    				printf("YES\n");
    				flag=false;
    				break;
    			}
    		}
    		if(flag){
    			printf("NO\n");
    		}
    	}
    	return 0;
    }
