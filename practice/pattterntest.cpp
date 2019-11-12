#include<iostream>
using namespace std;


main(){
    for(int i=3;i<=10;i++){
        for(int j=3;j<=i;j++){
            cout<<i<<"  ";
        }
        cout<<endl;
    }
    for(int i=10;i>=3;i--){
        for(int j=i;j>=3;j--){
            cout<<i<<"  ";
        }
        cout<<endl;
    }
}
