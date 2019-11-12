#include<iostream>
using namespace std;

main(){
    int arr[10]={4,7,8,6};
    for(int i=0;i<4;i++)
        cout<<arr[i]<<" ";
    cout<<"\n";
    for(int i=3;i>1;i--)
        arr[i+1]=arr[i];
    arr[2]=45;
    for(int i=0;i<5;i++)
        cout<<arr[i]<<" ";

}
