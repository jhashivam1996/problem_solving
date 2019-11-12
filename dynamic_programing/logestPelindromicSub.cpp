#include<iostream>
#include<cstring>
using namespace std;

 

struct lps{
	string ans="";
	int length;
}abc;

lps LPS(string s, int i, int j ){
	if(i==j){
		abc.ans=s[i];
		abc.length=1;
		return  abc;	
	}

	if(s[i]==s[j]){
		
		if(i+1==j){
			abc.ans.insert(s[i],0);
			abc.ans+= s[j];
			 
			abc.length=2;
			return abc;
		}else{
			lps a=LPS(s,i+1,j-1);
			a.ans.insert(s[i],0);
			a.ans+=s[j];
			abc.ans=a.ans;
			abc.length=2+a.length;
			return abc;
			 
		}	
		
	}
	else{
		
		lps x=LPS(s,i+1,j);
		lps y=LPS(s,i,j-1);
		
		if(x.length>y.length){
			abc.ans=x.ans;
			abc.length=x.length;
		}else{
			abc.ans=y.ans;
			abc.length=y.length;
		}
		cout<<abc.ans<<endl;
		return abc;
	}
}

int main(){
		string s="canach";
		lps  ans=LPS(s,0,s.size()-1);
		cout<<endl<<ans.ans<<endl<<ans.length;
		 
}