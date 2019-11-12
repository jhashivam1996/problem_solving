#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
	ll  n;cin>>n;
	ll arr[100000];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	ll s=0;
	ll ans=0;
	for(ll i=0;i<n;i++){
		if(arr[i]>0){
			s++;
		}
		else{
			 s=0;
		}	
		ans=max(ans,s);
	}
	cout<<ans<<endl;
	return 0;
}	