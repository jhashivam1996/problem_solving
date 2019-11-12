#include<bits/stdc++.h>
#define ll long long
using namespace std;

ll gcd(ll a, ll b){
	if(b==0){
		return a;
	}
	return gcd(b,a%b);
}

int main(){
	int  t;cin>>t;
	while(t--){
		int n;
		cin>>n;
		ll x1,x2;
		cin>>x1>>x2;
		ll ans=gcd(x1,x2);
		for(int i=0;i<n-2;i++){
			ll r;
			cin>>r;
			ans=gcd(ans,r);
		}
		cout<<ans<<endl;
	}
	return 0;
}	