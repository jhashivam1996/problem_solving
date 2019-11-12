#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		ll arr[n];
		for(int i=0;i<n;i++){
			cin>>arr[i];
		}
		sort(arr,arr+(sizeof(arr)/sizeof(arr[0])));
		ll min=INT_MAX;
		for(int i=0;i<n-1;i++){
			if(arr[i+1]-arr[i]<min){
				min=arr[i+1]-arr[i];
			}
		}
		cout<<min<<endl;
	}	
	return 0;
}