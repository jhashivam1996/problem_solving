
#include<iostream>
using namespace std;

void createMaxHeap(int a[],int size,int item){
    a[size+1]=item;
    int child=size+1;
    int parent=child/2;
    while(a[child]>a[parent]){
        swap(a[parent],a[child]);
        child=parent;
        parent=child/2;
        if(parent==0){
            break;
        }
    }
}

void adjust_root(int a[],int size){
    int parent=1;
    int child=2;
    if(size>=3 && a[3]>a[2])
        child=3;
    while(a[parent]<a[child]){
        swap(a[parent],a[child]);
        parent=child;
        child=2*parent;
        if(child>size){
            break;
        }
        if(child+1<=size && a[child+1]>a[child]){
            child++;
        }
    }
}

main(){
    int a[10]={3333};
    createMaxHeap(a,0,3);
    createMaxHeap(a,1,7);
    createMaxHeap(a,2,1);
    createMaxHeap(a,3,6);
    createMaxHeap(a,4,2);
    createMaxHeap(a,5,4);
    createMaxHeap(a,6,9);
    cout<<"before sorting: ";
    for(int i=1;i<=7;i++){
        cout<<a[i]<<" ";
    }
    cout<<"\nafter sorting: ";
    adjust_root(a,8);
    for(int i=1;i<=7;i++){
        cout<<a[i]<<" ";
    }

}
