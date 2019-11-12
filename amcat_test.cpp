#include<iostream>
#define callop main
using namespace std;

int op(int a,int b){
    return a<b?a:b;
}


int callop(){
    cout<<op(8,4);
    return 0;
}
