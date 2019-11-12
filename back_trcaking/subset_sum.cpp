#include<iostream>
#include<math.h>
#define n 5
using namespace std;

int ans[n]={0};
int s=0;
void print(int arr[]){
	cout<<"(";
	for(int i=0;i<n;i++){
		if(ans[i]==1)
			cout<<arr[i]<<",";
	}
	cout<<")"<<endl;
}
void check_sum(int arr[], int i, int k){  
	
	if(k==0){
		print(arr);
		s++;	
		return;
	}
	if(  i==n ){
		return ;	
	}
	ans[i]=1;	
	check_sum(arr,i+1,k -arr[i] );
	ans[i]=0;
	check_sum(arr,i+1,k);
	
}

int main(){ 
	int arr[]= {1,2,3,4,5};
	int k=5;
	check_sum(arr,0,k);
	cout<<"Number of subsets: "<<s<<endl;
}