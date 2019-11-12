#include<bits/stdc++.h>
#define ll long long
using namespace std;

 

int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		vector<ll> vec;
		for(int i=0;i<n;i++){
			ll x;
			cin>>x;
			vec.push_back(x);
		}
		int k;
		cin>>k;
		ll ans=vec[k-1];
		sort(vec.begin(),vec.end());
		int ind;
		for(int i=0;i<n;i++){
			 if(vec[i]==ans){
				 ind=i;
				 break;
			 }
		}
		cout<<ind+1<<endl;
	}
	return 0;
}	