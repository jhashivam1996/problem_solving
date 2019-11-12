#include<bits/stdc++.h>
#define ll long long
using namespace std;

ll sum(ll arr[],int n){
	ll _sum=0;
	for(int i=0;i<n;i++){
		 _sum+=arr[i];
	}
	return _sum;
}

int main(){
	int  t;cin>>t;
	while(t--){
		int n;
		cin>>n;
		ll m;
		cin>>m;
		ll arr[n];
		for(int i=0;i<n;i++){
			cin>>arr[i];
		}
		if(sum(arr,n)<m){
			cout<<"-1"<<endl;
			 
		}else{	
			sort(arr,arr+n);
			ll ans=0;
			int count=0;
		 
			for(int i=n-1;i>=0;i--){
				ans+=arr[i];
				if(ans<=m){
					count++;
				}else{
					break;
				}
			}
			
			cout<<count<<endl;
		}
	}
	return 0;
}	