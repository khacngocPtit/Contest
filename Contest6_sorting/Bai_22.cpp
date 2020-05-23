#include <bits/stdc++.h>
using namespace std;
/*

*/

int main() {
	int t; cin >> t;
	while (t--) {
		int n,x,val;
		cin >> n >> x;
		int ok = false;
		for(int i=0;i<n;i++){
			cin >> val;
			if(val == x) ok = true;
		}
		if(ok) {
			cout << 1 << endl;
		}
		else {
			cout << -1 << endl;
		}
	}
	return 0;
}

