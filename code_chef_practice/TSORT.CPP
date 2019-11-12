#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
	int  t;cin>>t;
	vector<int> vec;
	while(t--){
		int x;
		cin>>x;
		vec.push_back(x);
	}
	sort(vec.begin(),vec.end());
	for(int i=0;i<vec.size();i++){
		cout<<vec[i]<<endl;
	}
	return 0;
}	