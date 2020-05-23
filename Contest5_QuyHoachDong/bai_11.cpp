#include <bits/stdc++.h>
using namespace std;
/*

*/
int main() {
	int t; cin >> t;
	while (t--) {
		int n;
		cin >> n;
		int f[n+5];
		
		for(int i=0;i<=n;i++){
			f[0] = 1;
			f[1] =1;
			f[i]+= f[i]*f[n-i-1];
		}
		cout << f[n] << endl;
	}
	return 0;
}

