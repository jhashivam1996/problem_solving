#include<bits/stdc++.h>
#define ll long long
using namespace std;

 

int main(){
	int n,k;
	cin>>n>>k;
	int c=0;
	for(int i=0;i<n;i++){
		int x;
		cin>>x;
		if(x%k==0){
			c++;
		}
	}
	cout<<c<<endl;
	
	return 0;
}	