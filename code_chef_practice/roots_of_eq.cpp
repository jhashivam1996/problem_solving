#include<bits/stdc++.h>

 
using namespace std;

int main(){
	double a,b,c;
	cin>>a>>b>>c;
	double d=sqrt(b*b-4*a*c);
	double x1=(-b+d)/(2*a);
	double x2=(-b-d)/(2*a);
	cout<<fixed<<setprecision(6);
	cout<<x1;
	cout<<endl<<x2<<endl;
	return 0;
}