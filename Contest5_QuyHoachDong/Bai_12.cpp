#include <bits/stdc++.h>
using namespace std;
/*

*/
long long m = 1e9+7;
int tinh(int n, int k) {
	long long res = 1;
	if(k >n) return 0;
	else {
		for(int i=n-k+1; i<=n;i++){
			res = (res*i)%m;
		}
	}
	return res;
}
int main() {
	int t; cin >> t;
	while (t--) {
		int n,k;
		cin >> n >> k;
		cout << tinh(n,k) <<endl;
	}
	return 0;
}

