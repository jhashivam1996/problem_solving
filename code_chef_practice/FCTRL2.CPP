#include<bits/stdc++.h>
#define ll long long
using namespace std;
ll arr[100];

ll fact(int n){
	if(arr[n]!=-1)
		return arr[n];
	if(n==0 || n==1)
		return 1;
	return arr[n]=n*fact(n-1);
}

int main(){
	int  t;cin>>t;
	memset(arr,-1,sizeof(arr));
	while(t--){
		int n;
		cin>>n;
		cout<<fact(n)<<endl;
	}
	return 0;
}	