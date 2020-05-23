#include <bits/stdc++.h>
using namespace std;
/*

*/

int main() {
	int t; cin >> t;
	while (t--) {
		int n,val;
		cin >> n;
		int d[n+1] = {0};
		for(int i=0;i<n-1;i++){
			cin >> val;
			d[val] = 1;
		}
		for(int i=1;i<=n;i++){
			if(d[i]==0){
				cout << i;
				break;
			}
		}
		cout << endl;
	}
	return 0;
}

