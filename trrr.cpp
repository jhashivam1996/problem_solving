#include<iostream>
using namespace std;
int main()
{int arr[10]={1,2,3,4};
for(int i=0;i<4;i++)
{
cout<<arr[i]<<endl;
}
int i;
for( i=3;i>1;i--)
{
    arr[i+1]=arr[i];


}
arr[2]=6;
for(i=0;i<5;i++)
{

    cout<<arr[i];
}


return 0;
}
