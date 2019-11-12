#include<iostream>
using namespace std;

void swap(int* a, int* b)  
{  
    int t = *a;  
    *a = *b;  
    *b = t;  
} 

int partition(int arr[],int start,int end){
	int pivot=arr[end];
	int i=start-1;
	for(int j=start;j<=end-1;j++){
		if(arr[j]<pivot){
			i++;
			swap(&arr[i],&arr[j]);
		}
	}
	swap(&arr[i+1],&arr[end]);
	return (i+1);
}

void quickSort(int arr[],int start,int end){
	if(start<end){
		int part=partition(arr,start,end);
		quickSort(arr,start,part-1);
		quickSort(arr,part+1,end);	
	}
}

int main(){
	int arr[]={3,454,12,4,213,55,76,34,32,54,6};
	int size=sizeof(arr)/sizeof(int);
	quickSort(arr,0,size-1);
	for (int i = 0; i < size; i++) 
       		cout<<arr[i]<<" ";
	return 0; 
}