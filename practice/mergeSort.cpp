#include<iostream>
using namespace std;

void merge(int arr[],int start,int div,int end){
	int n1=div-start+1;
	int n2=end-div;
	int left[n1],right[n2];
	for (int i = 0; i < n1; i++) 
       		left[i] = arr[start+ i]; 
    	for (int j = 0; j < n2; j++) 
        		right[j] = arr[div+ j+1];

	int i=0,j=0,k=start;
	while(i<n1 && j<n2){
		if(left[i]<=right[j]){
			arr[k]=left[i];
			i++;
		}
		else{
			arr[k]=right[j];
			j++;
		}
		k++;
	}
	while(i<n1){
		arr[k]=left[i];
		i++;
		k++;
	}
	while(j<n2){
		arr[k]=right[j];
		j++;
		k++;
	}
	
}


void mergeSort(int arr[],int start,int end){
	if(start<end){
		int div=(start+(end-1))/2;
		mergeSort(arr,start,div);
		mergeSort(arr,div+1,end);
		merge(arr,start,div,end);
	}
}

int main(){
		int arr[]={3,454,12,4,213,55,76,34,32,54,6};
		int size=sizeof(arr)/sizeof(int);
		mergeSort(arr,0,size-1);
		for (int i = 0; i < size; i++) 
       			cout<<arr[i]<<" ";
		return 0; 
}