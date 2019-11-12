#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		ll n,k;
		cin>>n>>k;
		if(k==0)
			cout<<"0"<<" "<<n<<endl;
		else
			cout<<n/k<<" "<<n%k<<endl;
	}
	return 0;
}	