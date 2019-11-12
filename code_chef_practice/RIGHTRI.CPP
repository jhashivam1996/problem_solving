#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
	int  n;cin>>n;
	int count=0;
	while(n--){
		int x1,y1,x2,y2,x3,y3;
		cin>>x1>>y1>>x2>>y2>>x3>>y3;
		float ab=sqrt(double(pow(y2-y1,2)+pow(x2-x1,2)));
		float bc=sqrt(double(pow(y3-y2,2)+pow(x3-x2,2)));
		float ac=sqrt(double(pow(y3-y1,2)+pow(x3-x1,2)));
		if(pow(ab,2)+pow(bc,2)==pow(ac,2)){
			count++;
		}
	}
	cout<<count<<endl;
	return 0;
}	