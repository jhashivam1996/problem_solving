#include<iostream>
#include<bits/stdc++.h>
using namespace std;
long long int check[10]={0};

//memset(check,0,10*sizeof(check[0]));

long long fib(int n){
    if(n==0)
        return 0;
    else if(n==1)
        return 1;
    else if(check[n]!=0){
        return check[n];
    }else{
        check[n]=fib(n-1)+fib(n-2);
        return  check[n];
    }

}

main(){
 cout<<fib(1000);
}
