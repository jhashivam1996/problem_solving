#include<bits/stdc++.h>
#define ll long long
using namespace std;

int reverse(int n){
	int newnum=0;;
	while(n>0){
		int r=n%10;
		newnum=r+(newnum*10);
		n/=10;
	}
	return newnum;
}

int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		cout<<(n%10)+(reverse(n)%10)<<endl;
	}
	
	return 0;
}	