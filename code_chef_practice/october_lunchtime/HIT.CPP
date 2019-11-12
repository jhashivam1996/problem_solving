#include<bits/stdc++.h>
#define n 1000
using namespace std;
 
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int arr[n];
		unordered_map<int,int> mp;
		for(int i=0;i<n;i++){
			int p;
			cin>>p;
			arr[i]=p;
			mp[p]++;
		}
		for(auto abc:mp){
			if(abc.first>1){
				cout<<"-1"<<endl;
				return 0;
			}
		}
		
	}
	return 0;	
}	