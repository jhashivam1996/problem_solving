#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
	int  t;cin>>t;
	while(t--){
		int need,avl,bgt,n;
		cin>>need>>avl>>bgt>>n;
		bool flag=false;
		while(n--){
			int page,cost;
			cin>>page>>cost;
			if(need<=page+avl && cost<=bgt){
				flag=true;
			}
			
		}
		if(!flag){
			cout<<"UnluckyChef"<<endl;
		}else{
			cout<<"LuckyChef"<<endl;
		}
	}
	return 0;
}	