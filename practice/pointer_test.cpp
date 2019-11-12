#include<iostream>
#include<string.h>
using namespace std;

int main(){

    int a=10;
    int *p=&a;
    int  **m=&p;
    **m=5;
    char str[]="hello, world";


    cout<<a<<" ";
     cout<<*p<<" ";
     cout<<**m<<" ";
     cout<<strlen(str);

}
