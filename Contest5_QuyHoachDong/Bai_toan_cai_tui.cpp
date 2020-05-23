#include <bits/stdc++.h>
using namespace std;
/*
Bai toan cai tui: 
*/
int f[1005][1005] , n,v,a[1005],c[1005];
int tinh() {
	int i,j;
	for(i=0;i<=n;i++){
		f[i][0] = 0;
	}
	for(i=0;i<=v;i++){
		f[0][i] = 0;
	}
	for(i=1;i<=n;i++){
		for(j=1;j<=v;j++){
			f[i][j] = f[i-1][j]; //it nhat la bang cai da co
			if(j>a[i]) {
				f[i-1][j] = max(f[i-1][j-a[i]]+c[i],f[i-1][j]);
			}
		}
	}
	return f[n][v];
}
int main() {
	int t; cin >> t;
	while (t--) {
		cin >> n >> v;
		for(int i = 1;i<=n;i++) cin >> a[i];
		for(int i = 1;i<=n;i++) cin >> c[i];
		cout << tinh() << endl;
	}
	return 0;
}

