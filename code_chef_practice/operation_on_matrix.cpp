#include<iostream>
#include<cstring>
using namespace std;

int main(){
	int t;
	cin>>t;
	int **arr= new int*;
	while(t--){
		int n,m,q;
		cin>>n>>m>>q;
		for(int i=1;i<=m;i++){
			arr[i]=new int;
		}
		 
		for(int i=1;i<=n;i++)
			for(int j=1;j<=m;j++)
				arr[i][j]=0;
		
				
		while(q--){
			int x,y;
			cin>>x>>y;
			for(int i=1;i<=n;i++){
				 arr[i][x]+=1;
			}
			for(int i=1;i<=m;i++){
				 arr[y][i]+=1;
			}
		}
		int count=0;
		for(int i=1;i<=n;i++){
			for(int j=1;j<=m;j++){
					 if(arr[i][j]%2!=0)
						 count++;
				}
		}
		cout<<count;
	}
}