#include<iostream>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int a[n+1];
		for(int i=1;i<=n;i++)
			cin>>a[i];

		int no_of_days=1;
		for(int i=2;i<=n;i++){
			if(i==2 && a[i]<a[i-1])
				no_of_days++;
			else if(i==3 && a[i]<a[i-1] && a[i]<a[i-2])
				no_of_days++;
			else if(i==4 && a[i]<a[i-1] && a[i]<a[i-2] && a[i]<a[i-3])
				no_of_days++;
			else if(i==5 && a[i]<a[i-1] && a[i]<a[i-2] && a[i]<a[i-3] && a[i]<a[i-4])
				no_of_days++;
		    	else if(a[i]<a[i-1] && a[i]<a[i-2] && a[i]<a[i-3] && a[i]<a[i-4] && a[i]<a[i-5])
				no_of_days++;
			
		}
		cout<<no_of_days<<endl;
	}
	return 0;
}