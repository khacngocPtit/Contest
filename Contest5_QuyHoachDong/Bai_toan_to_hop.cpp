#include <bits/stdc++.h>
using namespace std;
/*
Tinh to hop chap k cua n
*/
int main() {
	long long n , k;
	cin >> n >> k;
	long long c[n+1][n+1];
	c[0][0] = 1;
	for(long long i = 1 ; i<=n; i++){
		c[i][0] = 1;
		c[i][i] = 1;
		for(long j = 1; j<i;j++){
			c[i][j] = c[i-1][j-1]+c[i-1][j];
		}
	}
	cout << c[n][k];
	return 0;
}

