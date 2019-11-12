#include<bits/stdc++.h>
#define ll long long
using namespace std;
string arr;
int main(){
	int  t;cin>>t;
	while(t--){
			cin>>arr;
			for(int i=0;i<arr.size()-2;i++){
				if((arr[i]=='0' && arr[i+1]=='1' && arr[i+2]=='0') ||
				    (arr[i]=='1' && arr[i+1]=='0' && arr[i+2]=='1')){
					cout<<"Good"<<endl;
					break;
				}
				if(i==arr.size()-3){
					cout<<"Bad"<<endl; 
				}
			}
	}
	return 0;
}	