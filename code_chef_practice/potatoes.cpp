#include<bits/stdc++.h>
#define ll long long
using namespace std;

bool isPrime(int n){
	for(int  i=2;i<=sqrt(n);i++){
		if(n%i==0){
			return false;
		}
	}
	return true;
}

int main(){
	int t;cin>>t;
	while(t--){
		int x,y;
		cin>>x>>y;
		int i=1;
		while(!isPrime(x+y+i)){
			i++;
		}
		cout<<i<<endl;
		 
	}
	return 0;
}	