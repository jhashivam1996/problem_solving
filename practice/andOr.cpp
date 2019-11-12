#include<iostream>
#include<cstdlib>
using namespace std;

int main(){
	char str[]="1B0C1A0";
	int ans=atoi(str);
	int i=2;
	int j=1;
	while(str[i]!='\0'){
		if(str[j]=='A'){
			ans&=atoi(str+i);
		}
		if(str[j]=='B'){
			ans|=atoi(str+i);
		}
		if(str[j]=='C'){
			ans^=atoi(str+i);
		}
		i=i+2;
		j=j+2;
	}
	cout<<ans;
}