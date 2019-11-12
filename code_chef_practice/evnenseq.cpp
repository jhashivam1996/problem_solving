#include<bits/stdc++.h>
#define ll long long
using namespace std;

int findCnt(int arr[], int n, int k) 
{ 
    int ans = 0;
	if (arr[0] > k || arr[0] < -1 * k) 
        ans++; 
    for (int i = 1; i < n; i++) { 
        arr[i] += arr[i - 1]; 
        if (arr[i] > k || arr[i] < -1 * k) 
            ans++; 
    } 
    sort(arr, arr + n); 
    for (int i = 0; i < n; i++) 
        ans += n -(upper_bound(arr, arr + n, arr[i] + k) - arr); 
    return ans; 
} 
 
int main(){
	int vec[]={1,5,1};
	cout<<findCnt(vec,3,5);
	return 0;
}	