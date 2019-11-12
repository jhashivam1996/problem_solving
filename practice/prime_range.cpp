#include<iostream>
#include<stack>
using namespace std;


int isPrime(int n){
	int f=0;
	for(int i=2;i<=n;i++){
		if(n%i==0){
			 f++;
		}
	}
	if(f==1){
		return 1;
	}
	return 0;
}

int main(){
	int m,n;
	cin>>m;
	cin>>n;
	stack<int> vec;
	int flag=0;
	for(int i=m;i<=n;i++){ 
		if(isPrime(i) && isPrime(i+6)){
			vec.push(i);
			vec.push(i+6);
			cout<<i<<"  "<<i+6<<endl;	
		} 
		
	}
	 
	cout<<endl<<"Number of such consecutive pair:  "<<vec.size()<<endl;	 
	
}