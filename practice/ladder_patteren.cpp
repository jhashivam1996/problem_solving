#include<iostream>
#define n 8
using namespace std;


void print(int arr[][n]){
	int k=1;
	for(int i=0;i<2*n-1;i++){ 
		int temp;
		if(i<=n-1){
			temp=i; 
			for(int j=0;j<=i;j++){
			cout<<arr[temp--][j]; 	
			}
		}
		else{
			temp=n-1;
			for(int j=k++;j<=n-1;j++){
			cout<<arr[temp--][j]; 	
			}
		}
		cout<<endl;	 
	}	
}

int main(){
	int arr[][n]={{1, 2, 3, 4, 1, 2, 3, 4},
		  {5, 6, 7, 8, 1, 2, 3, 4},
		  {9, 4, 6, 4, 1, 2, 3, 4},
		  {4, 5, 7, 8, 1, 2, 3, 4},
		  {4, 5, 7, 8, 1, 2, 3, 4},
		  {4, 5, 7, 8, 1, 2, 3, 4},
		  {4, 5, 7, 8, 1, 2, 3, 4},
		  {4, 5, 7, 8, 1, 2, 3, 4}};
	print(arr);
}