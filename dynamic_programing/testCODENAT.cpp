 
#include <vector>
#include <climits>
#include <iostream>
#include <algorithm>
 
using namespace std;
int main() {
    long long int n,i;
    int p=0,q=0;
    long long int sum=0;
    int minlen=INT_MAX;
    int t=1;
    
    while(t--){
        cin>>n;
        if(n<9){
            cout<<"-1"<<"\n";
             
        }
        else if(n%10==9){
            cout<<"1"<<"\n";
        }
        else{
            int vec[n];
     	 
            for(i=n;i>=0;){
                if(i%10==9){
                    vec[i]=i;
                    i-=10;
                }else
                {   
                    i--;
                }
            }
            
            
            for( ;p<n;){
                if(sum<n){
                    sum+=vec[p];
                    p++;
                }else if(sum>n){
                    sum-=vec[q];
                    q++;
                }
                else if(sum==n){
                    if(minlen>p-q){
                        minlen=p-q;

                    }
                    else{
                        p++;
                    }
                    sum-=vec[q];
                    q++;
                }
            }
            cout<<minlen<<"\n";
	for(int i=0;i<n;i++){
		cout<<vec[i]<<" ";	
	}     
        }
	
        
    }
    return 0;
}

