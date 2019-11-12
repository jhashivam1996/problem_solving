#include<iostream>
using namespace std;
int x=0;
void all_subset(string s, string ans){
	if(s.size()==0){
		cout<<ans<<endl;
		return;
	}
	
	ans+=s[0];
	all_subset(s.substr(1),ans);
	ans.erase(ans.end()-1);
	all_subset(s.substr(1),ans);
	x++;
}

int main(){
	string s="123456789";
	all_subset(s,"");
	cout<<x;
}