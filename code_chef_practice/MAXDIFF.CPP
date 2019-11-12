#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
	int  t;cin>>t;
	while(t--){
		int n,k;
		cin>>n>>k;
		int arr[n];
		for(int i=0;i<n;i++){
			cin>>arr[i];
		}
		sort(arr,arr+n);
		k=k<n-k?k:n-k;
		ll chef=0;
		ll kid=0;
		for(int i=0;i<n;i++){
			if(i<k){
				kid+=arr[i];
			}
			else{
				chef+=arr[i];
			}
		}
		
		cout<<abs(chef-kid)<<endl;
		
	}
	return 0;
	
}	