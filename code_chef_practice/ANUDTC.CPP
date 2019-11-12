#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
	int  t;cin>>t;
	while(t--){
		int n;
		cin>>n;
		if(360%n==0)
            cout<<"y ";
        else
            cout<<"n ";
        if(n<=360)
            cout<<"y ";
        else
            cout<<"n ";
        if(n<=26)
            cout<<"y ";
        else
            cout<<"n ";
		cout<<endl;
	}
	return 0;
}	