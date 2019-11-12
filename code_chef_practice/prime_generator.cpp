#include<bits/stdc++.h>
#define ll long long
using namespace std;

bool isPrime(int n){
	for(int i=2;i<=sqrt(n);i++){
		if(n%i==0){
			 return false;
		}
	}
	return true;
}

int main(){
	int t;
	cin>>t;
	while(t--){
		ll m,n;
		cin>>m>>n;
		if(m==1){
			m=2;
		}
		for(ll i=m;i<=n;i++){
			if(isPrime(i)){
				cout<<i<<endl;
			}
		}
	}
	return 0;
}