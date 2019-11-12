#include<iostream>
using namespace std;


void functionCellComplete(int arr[],int numberofdays,int sizeofarray){
    int temp[8];
    int temp2[8];

    while( numberofdays>=1){
        if(numberofdays%2!=0){
            for(int i=0;i<sizeofarray;i++){
                if(i==0 && arr[i+1]==1){
                    temp[i]=1;
                }
                else if(i==sizeofarray-1 && arr[i-1]==1){
                    temp[i]=1;
                }
                else if(i>0 && i<sizeofarray-1){
                    if((arr[i-1]==1 && arr[i+1]==1) || (arr[i-1]==0 && arr[i+1]==0)){
                        temp[i]=0;
                    }
                    else
                        temp[i]=1;
                }

                else{
                    temp[i]=0;
                }

            }
        }
        else{
            for(int i=0;i<sizeofarray;i++){
                if(i==0 && temp[i+1]==1){
                    arr[i]=1;
                }
                else if(i==sizeofarray-1 && temp[i-1]==1){
                    arr[i]=1;
                }
                else if(i>0 && i<sizeofarray-1){
                    if((temp[i-1]==1 && temp[i+1]==1) || (temp[i-1]==0 && temp[i+1]==0)){
                        arr[i]=0;
                    }
                    else
                        arr[i]=1;
                }

                else{
                    arr[i]=0;
                }

            }
        }

      numberofdays--;
    }

    if(numberofdays%2!=0){
        for(int i=0;i<sizeofarray;i++){
            cout<<temp[i]<<" ";
        }
    }
    else
    {
        for(int i=0;i<sizeofarray;i++){
            cout<<arr[i]<<" ";
        }
    }


}

main(){
    int arr[]={1,0,1,0,1,1,0,1};
    int sizeofarray=8;
    int numberofdays=3;
    functionCellComplete(arr,numberofdays,sizeofarray);
}
