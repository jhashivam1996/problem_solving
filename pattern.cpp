#include<iostream>
using namespace std;

int main(){
	int n=10;
	for(int i=1;i<=10;i++){
		int j=1;
		for(;j<=i;j++){
			cout<<j;
		}
		int space=2*n-2; 
		for(int k=0;k<space;k++){
			cout<<" ";
		}
		j-=1;
		for(;j>=1;j--){
			cout<<j;
		}
		n--;
		cout<<endl;
	}
}