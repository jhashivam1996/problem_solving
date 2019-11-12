#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
	int  t;cin>>t;
	while(t--){
		ll n;
		cin>>n;
		ll ans=n-1;
		for(int i=2;i<=sqrt(n);i++){
			ll a,b;
			if(n%i==0){
				a=i;
				b=n/i;
				ans=min(b-a,ans);
			}
		}
		cout<<ans<<endl;
	}
	return 0;
}	