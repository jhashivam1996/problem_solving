#include<bits/stdc++.h>
#define ll long long
using namespace std;


int main(){
	int  t;cin>>t;
	map<string,int> days;
	days["saturday"]=1;
	days["sunday"]=2;
	days["monday"]=3;
	days["tuesday"]=4;
	days["wednesday"]=5;
	days["thursday"]=6;
	days["friday"]=7;
	
	while(t--){
		string s,e;
		cin>>s>>e;
		int l,r;
		cin>>l>>r;
		int dur=days[s]+days[e]-1;
		if(dur<l){
			 cout<<"impossible";
		}
		else if((dur<=r && dur>=l) && 2*dur>=r){
			   cout<<dur;
		} 
		else{
			cout<<"many"; 
		}
		cout<<endl;
	}
	return 0;
}	