#include<iostream>
using namespace std;
 
void all_subset(string s, string ans){
	if(s.size()==0){
		cout<<ans<<endl;
		return;
	}
	ans+=s[0];
	all_subset(s.substr(1),ans);
	ans.erase(ans.end()-1);
	all_subset(s.substr(1),ans);	 
}

int main(){
	string s="1234";
	all_subset(s,"");
}