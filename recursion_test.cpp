#include<iostream>
using namespace std;

void print(int x){
    if(x<=0)
        return;
    cout<<x<<" ";
    print(x-1);
}

main(){
    print(100000);
}
