#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
	ll  n,d;cin>>n>>d;
	ll arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	sort(arr,arr+n);
	ll count=0;
	for(int i=0;i<n-1;i++){
		if(arr[i+1]-arr[i]<=d){
			count++;
			i++;
		}
	}
	cout<<count<<endl;
	return 0;
}	