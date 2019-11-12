#include <bits/stdc++.h> 
#define ll long long
using namespace std;
 
ll nCr(int n, int r) 
{ 
    ll p = 1, k = 1; 

    if (n - r < r) 
        r = n - r; 
  
    if (r != 0) { 
        while (r) { 
            p *= n; 
            k *= r; 
            ll m = __gcd(p, k); 
            p /= m; 
            k /= m; 
            n--; 
            r--; 
        }   
    } 
  
    else
        p = 1; 

     return p;
} 
  


int main(){
	int t;
	cin>>t;
	while(t--){
		int n,k;
		cin>>n>>k;
		int arr[n];
		for(int i=0;i<n;i++)
			cin>>arr[i];
		int s = sizeof(arr)/sizeof(arr[0]);
    		sort(arr, arr+s); 
		int border_value=arr[k-1];
		int count=0;
		for(int i=0;i<n;i++)
			if(arr[i]==border_value)
				count++;
		int num=0;
		for(int i=0;i<k;i++)
			if(arr[i]==border_value)
				num++;
		cout<<nCr(count,num)<<endl;
	}
	return 0;
}