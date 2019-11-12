#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
	int  t;cin>>t;
	while(t--){
		int n;
		cin>>n;
		int arr[n];
		unordered_map<int,int> mp;
		for(int i=0;i<n;i++){
			cin>>arr[i];
			mp[arr[i]]++;
		}
		int ans=0;
		for(auto x:mp){
			if(x.second>1)
				ans+=x.second-1;
		}
		cout<<n-ans<<endl;
	}
	return 0;
}	