#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		int g;
		cin>>g;
		while(g--){
				int i,q;
				ll n;
				cin>>i>>n>>q;
				int vec[n];
				if(i==1){
					memset(vec,1,sizeof(vec));
					for(int p=1;p<=n;p++)
						for(int j=0;j<p;j++){
							if(vec[j]==1)
								vec[j]=0;
							else
								vec[j]=1;
						}
 
				}else{
					memset(vec,0,sizeof(vec));
					for(int p=1;p<=n;p++)
						for(int j=0;j<p;j++){
							if(vec[j]==0)
								vec[j]=1;
							else
								vec[j]=0;
						}
				}
				int count=0;
				for(int j=0;j<n;j++){
					if(vec[j]==1)
						count++;
				}
				if(q==2){
					cout<<count<<endl;
				}else{
					cout<<n-count<<endl;
				}
			
		}
	}
	return 0;
}	