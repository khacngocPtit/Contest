#include <bits/stdc++.h>
using namespace std;
/*

*/
int main() {
	int t; cin >> t;
	while (t--) {
		int n ,m;
		cin >> n >> m;
		int a[n+1][m+1];
		int f[n+1][m+1];
		memset(f,0,sizeof(f));
		for(int i=1;i<=n;i++){
			for(int j=1;j<=m;j++){
				cin >> a[i][j];
				f[i][j] = a[i][j];
			}
		}
		int res = 0;
		for(int i=1;i<=n;i++){
			for(int j=1;j<=m;j++){
				if(a[i][j] ==0) continue; // Xet tai a[i][j] == 0 thi tiep sang o ke tiep
				if(a[i][j]==a[i-1][j-1]&& a[i][j]==a[i-1][j] && a[i][j]==a[i][j-1]){
					f[i][j] = min(f[i-1][j-1],min(f[i-1][j],f[i][j-1]))+1; // Lay ket qua nho nhat duoc cap nhat o 3 dinh
				}
				res = max(res,f[i][j]);
			}
		}
		cout << res<<endl;
	}
	return 0;
}

