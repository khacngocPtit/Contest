#include <bits/stdc++.h>
using namespace std;
/*

*/


int main() {
	int t; cin >> t;
	while (t--) {
		int n,m,a;
		int d[100005] ={0};
		cin >> n >> m;
		for(int i =0; i<n+m;i++){
			cin >> a;
			d[a]++;
		}
		for(int i=0;i < 100000;i++) {
			if(d[i] >=1) cout << i << " ";
		}
		cout <<endl;
		for(int i=0;i<100000; i++){
			if(d[i] > 1) cout << i <<" ";
		}
		cout << endl;
	}
	return 0;
}

