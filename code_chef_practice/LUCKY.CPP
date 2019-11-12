#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
	int  t;cin>>t;
	while(t--){
		string num;
		cin>>num;
		int count=0; 
		for(int i=0;i<num.length();i++){
			if(num[i]=='4' || num[i]=='7'){
				 count++;
			} 
		}
		cout<<num.length()-count<<endl;
	}
	return 0;
}	