#include<bits/stdc++.h>
#define n 1000
using namespace std;
 
int main(){
	int t;
	cin>>t;
	while(t--){
		int x;
		cin>>x;
		int arr[1000];
		memset(arr,0,sizeof(arr));
		arr[n-1]=1;
		for(int d=1;d<=x;d++){
			int carry=0;
			for(int i=n-1;i>=0;i--){
				int ans=arr[i]*d+carry;
				arr[i]=ans%10;
				carry=ans/10;
			}
		}
		bool f=false;
		for(int d=0;d<n;d++){
				if(arr[d]!=0)f=true;
				if(f)cout<<arr[d];	
		}
		cout<<endl;
	}
	return 0;	
}	