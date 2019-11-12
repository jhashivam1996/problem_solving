#include<iostream>
#include<math.h>
using namespace std;

main(){
    int n =2345;
    int digit = (int)(n / pow(10, 2 - 1)) % 10;
    cout<<digit;
}
