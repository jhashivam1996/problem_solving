#include<bits/stdc++.h>
#define ll long long
using namespace std;

 

int main(){
	int t;cin>>t;
	while(t--){
		int m,n;
		cin>>n>>m;
		int jobs[m];
		for(int i=0;i<m;i++){
			cin>>jobs[i];
		}
		vector<int> chef,assist;
		sort(jobs,jobs+m);
		int count=1;
		for(int i=1;i<=n;i++){
			if (!binary_search(jobs,jobs+m,i)){
				if(count&1){
					chef.push_back(i);
				}
				else{
					assist.push_back(i);
				}
				count++;
			} 
		}
		if(chef.size()==0)
			cout<<endl;
		else
			for(int i=0;i<chef.size();i++){
				cout<<chef[i]<<" ";
			}
		cout<<endl;
		if(assist.size()==0)
			cout<<endl;
		else
			for(int i=0;i<assist.size();i++){
				cout<<assist[i]<<" ";
			}
		cout<<endl;
	}
	return 0;
}	