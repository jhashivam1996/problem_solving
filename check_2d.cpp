#include<iostream>
#include<cstring>
using namespace std;

int main(){
	 
		int n,m;
		cin>>n>>m;
		int **arr= new int*[n+1];
		for(int i=1;i<m+1;i++){
			arr[i]=new int;
		}
		 
		for(int i=1;i<=n;i++){
			for(int j=1;j<=m;j++){
					 arr[i][j]=0;
				}
			 
		}
		
				
		
		for(int i=1;i<=n;i++){
			for(int j=1;j<=m;j++){
					 cout<<arr[i][j]<<" ";
				}
			cout<<endl;
		}
		
		 
	
}