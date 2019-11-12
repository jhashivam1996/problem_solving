#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
	ll  n;cin>>n;
	ll ans=0;
	for(ll i=0;i<n;i++){
		ll x;
		cin>>x;
		ans+=x;
	}
	ll fans=(n*(n+1))/2;
	if(ans==fans){
		cout<<"YES"<<endl;
	}
	else{
		cout<<"NO"<<endl;
	}
	return 0;
}	