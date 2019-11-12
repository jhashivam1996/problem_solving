#include<stdio.h>
#include<string.h>
#include<iostream>
using namespace std;


void extractUniqueChar(char arr[]){


    char uniqe[20];
    int coun=0;
    int k=0;
    for(int  i=0;i<strlen(arr);i++){
        for(int j=i+1;j<strlen(arr);j++){
            if(arr[i]==arr[j]){
                coun++;
            }
        }
        if(coun==0){
            uniqe[k]=arr[i];
            k++;

        }else{
            coun=0;
        }
    }
    uniqe[k]='\0';


    for(int i=0;i<strlen(uniqe);i++){
            cout<<uniqe[i]<<" ";
        }
    cout<<"\n";


}


main(){
    char arr[]="hellowjwdbhchdhhhhhdwsxdhebbbb";
    extractUniqueChar(arr);

}
