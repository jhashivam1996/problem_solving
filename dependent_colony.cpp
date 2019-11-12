#include<iostream>
using namespace std;

int main(){
  int arr[]={1,1,1,0,1,1,1,1};
  int siz=sizeof(arr)/sizeof(arr[0]);
  int temp[siz];
  int d=3;
  while(d--){
        for(int i=0;i<siz;i++){
            if(i==0){
                temp[i]=arr[i+1];
            }
            else if(i==siz-1){
                temp[i]=arr[siz-2];
            }
            else{
                temp[i]=(arr[i-1]^arr[i+1]);
            }
        }
        for(int i=0;i<siz;i++){
                arr[i]=temp[i];
        }
  }

  for(int i=0;i<siz;i++){
        cout<<arr[i]<<" ";
  }
}
