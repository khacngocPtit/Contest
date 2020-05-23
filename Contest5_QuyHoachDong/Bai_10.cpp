#include <bits/stdc++.h>
using namespace std;
/*

*/
int main() {
	int t; cin >> t;
	while (t--) {
		int n ,m;
		cin >> n >> m;
		int f[n+5][m+5],a[n+5][m+5];
		for(int i=1;i<=n;i++)
			for(int j=1;j<=m;j++)
				cin >> a[i][j];
		
		memset(f,0,sizeof(f)); // reset cac gia tri trong mang f co gt 0
		for(int i=1;i<=n;i++){
			for(int j=1;j<=m;j++){
				if(i==1&&j==1) f[i][j]=a[i][j];
				else if(i==1) f[i][j] =a[i][j] + f[i][j-1];
				else if(j==1) f[i][j] = a[i][j]+ f[i-1][j];
				else f[i][j] = a[i][j] + min(f[i-1][j-1],min(f[i-1][j],f[i][j-1]));
			}
		}
		cout << f[n][m] << endl;
	}
	return 0;
}

