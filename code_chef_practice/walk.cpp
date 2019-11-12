#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
	int  t;cin>>t;
	while(t--){
		int n;
		cin>>n;
		int arr[n];
		for(int i=0;i<n;i++)
			cin>>arr[i];
		int maxe=0;
		 
		for(int i=0;i<n;i++){
			if(maxe<arr[i]+i){
				maxe=arr[i]+i;
			}
		}
		cout<<maxe<<endl;
	}
	return 0;
}	