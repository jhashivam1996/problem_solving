#include<iostream>
#include<algorithm>

using namespace std;

void nthMax(int* a,int siz,int n){
    sort(a, a+siz);
    cout<<n<<"th Min: "<<a[n-1]<<endl;
    cout<<n<<"th Max: "<<a[siz-(n)];
}

main(){
    int a[]={5,7,8,1,4,6,9};
    int n=2;
    nthMax(a,sizeof(a)/sizeof(a[0]),n);
}
