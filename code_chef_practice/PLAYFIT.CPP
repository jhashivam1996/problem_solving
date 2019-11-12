#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
	int  t;cin>>t;
	while(t--){
		int n;
		cin>>n;
		int arr[n];
		for(int i=0;i<n;i++){
			cin>>arr[i];
		}
		int diff=0;
		int min_g=INT_MAX;
		for(int i=0;i<n;i++){
			min_g=min(min_g,arr[i]);
			diff=max(diff,arr[i]-min_g);
		}
		if(diff>0){
			cout<<diff;
		}
		else{
			cout<<"UNFIT";
		}
		cout<<endl;
	}
	return 0;
}	