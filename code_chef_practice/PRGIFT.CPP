#include <bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	
	int tt;
	cin >> tt;
	while(tt--){
	  int n, k;
	  cin >> n >> k;
	  vector<int> v(n);
	  int e =0;
	  for(int i=0; i < n; i++){
	    cin >> v[i];
	    if(!(v[i]&1)){
	      e++;
	    }
	  }
	  if(k == 0 && e == n){
	    cout << "NO\n";
	  }
	  else{
	    cout << ((k<= e)?"YES":"NO" )<< '\n';
	  }
	}
	return 0;
}
