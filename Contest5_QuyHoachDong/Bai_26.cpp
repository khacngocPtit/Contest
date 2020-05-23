#include <bits/stdc++.h>
using namespace std;
/*
Bai 26:n con bo moi con bo co 1 kich thuoc;
1 xe tai co kich thuoc 
*/
int f[105][25005] , n,v,a[105];
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
				f[i][j] = max(f[i-1][j-a[i]]+a[i],f[i-1][j]);
			}	
		}
	}
	return f[n][v];
}
int main() {
	cin >> v >> n;
	for(int i = 1;i<=n;i++) cin >> a[i];
	cout << tinh()<<endl;
	
	return 0;
}

