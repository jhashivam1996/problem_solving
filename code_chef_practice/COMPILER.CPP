#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
	int  t;cin>>t;
	while(t--){
		 string s;
		 cin>>s;
		 int ans=0;
		 int x=0,y=0;
		 for(int i=0;i<s.size();i++){
			 if(s[i]=='<'){
				x++;
			 }
			 else if(s[i]=='>'){
				  y++;
			 } 
			 
			 if(x==y){
				 ans=2*x;
			 }
			 else if(x<y){
				 break;
			 }
		 }
		cout<<ans<<endl;
	}
	return 0;
}	