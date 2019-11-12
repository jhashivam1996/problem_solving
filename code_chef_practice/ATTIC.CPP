#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
	int  t;cin>>t;
	while(t--){
		 string s;
		 cin>>s;
		 int count=0;
		 int m=0,ans=0;
		 for(int i=0;i<s.length();i++){
			 if(s[i]=='.'){
				 count++;
			 }
			 else{
				 if(count>m){
					 ans++;
					 m=count;
				 }
				 count=0;
			 }
			 
		 }
		 cout<<ans<<endl;
	}
	return 0;
}	