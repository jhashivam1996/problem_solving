#include<iostream>
using namespace std;


void PostfixZero(int arr[],int n){

    for(int i=0;i<n;i++){
        for(int j=0;j<n-1;j++){
             if(arr[j]==0){
                int temp=arr[j];
                 arr[j]=arr[j+1];
                 arr[j+1]=temp;
        }
        }
    }

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

}

main(){
    int arr[]={4,8,0,7,0,1,0,0,2,4,0,7};
    int sizeofarray=sizeof(arr)/arr[0];
    cout<<sizeofarray;
    PostfixZero(arr,sizeofarray);
}
