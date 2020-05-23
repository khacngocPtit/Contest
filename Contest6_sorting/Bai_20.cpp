#include <bits/stdc++.h>
using namespace std;
/*

*/
int main() {
	int t; cin >> t;
	while (t--) {
		int n,k;
		cin >> n >> k;
		int a[n+5];
		for(int i=0;i<n;i++){
			cin >> a[i];
		}
		sort(a,a+n);
		int count = 0;
		int max = a[n-1];
		for(int i=0;i<n;i++){
			if(a[i]+k>max) {
				cout << i+1;
				break;
			}
		}
		cout << endl;
	}
	return 0;
}

