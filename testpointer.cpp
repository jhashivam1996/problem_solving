#include<iostream>
using namespace std;

int main(){

    int  *p,*p1;
    char arr[45];
    cin>>arr;
    cout<<arr;
    int a=9;
    p=&a;
    p1=&a-1;
    cout<<p[0]<<" "<<p1[0];


}
