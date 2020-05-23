#include <bits/stdc++.h>
using namespace std;
/*

*/
int main() {
	int t; cin >> t;
	while (t--) {
		int n, x, val; cin >> n >> x;
		int index = 1;
		for(int i=1;i<=n;i++){
			cin >> val;
			if(val == x) {
				index = i;
			}
		}
		cout << index << endl;
	}
	return 0;
}

