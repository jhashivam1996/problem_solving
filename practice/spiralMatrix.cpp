#include<iostream>
using namespace std;

void printSpiral(int arr[][4],int m,int n){
	int left=0,right=m-1;     //for column printing 
	int top=0,bottom=n-1;  //for row printing
	int dir=0;
	while(top<=bottom && left<=right){
		if(dir==0){
			for(int i=left;i<=right;i++)
				cout<<arr[top][i]<<"  ";
			top++;
		}
		else if(dir==1){
			for(int i=top;i<=bottom;i++)
				cout<<arr[i][right]<<"  ";
			right--;
		}
		else if(dir==2){
			for(int i=right;i>=left;i--)
				cout<<arr[bottom][i]<<"  ";
			bottom--;
		}
		else if(dir==3){
			for(int i=bottom;i>=top;i--)
				cout<<arr[i][left]<<"  ";
			left++;
		}
		dir=(dir+1)%4;
	}
}

int main(){
	int arr[][4]={{1,2,3,45},{4,5,6,14},{7,8,9,74},{12,41,12,75}};
	for(int i=0;i<4;i++){
		for(int j=0;j<4;j++){
			cout<<arr[i][j]<<" ";
		}
		cout<<endl;
	}
	cout<<endl<<"Spiral form of above matrix: ";	
	printSpiral(arr,4,4);
}