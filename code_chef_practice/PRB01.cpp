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
	int  t;cin>>t;
	while(t--){
		int n;
		cin>>n;
		if(n==1){
			cout<<"no";
		}
		else if(isPrime(n)){
			cout<<"yes";
		}
		else{
			cout<<"no";
		}
		cout<<endl;
	}
	return 0;
}	