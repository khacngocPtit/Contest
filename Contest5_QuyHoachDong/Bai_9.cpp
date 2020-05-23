#include <bits/stdc++.h>
using namespace std;
long long f[101][50001];
const long long mod=1e9+7;
/*
Goi f[i][j] la ket qua can tim
	f[i][j] += f[i-1][j-s0]
	f[0][j]=0;f[i][0]=0;f[1][j]=1;
*/
int main() {
	for(int i=0;i<=101;i++){
		f[i][0] =0;
	}
	for(int j=0;j<50001;j++){
		f[0][j]=0;
	}
	for(int j=1;j<9;j++){
		f[1][j] =1;
	}
	for(int i=1;i<=100;i++){
		for(int s=0;s<=9;s++){
			for(int j=s;j<=50000;j++){
				f[i][j] = (f[i][j]%mod+f[i-1][j-s]%mod)%mod;
			}
		}
	}
	int t; cin >> t;
	while (t--) {
		int n ,k;
		cin >> n >> k;
		cout << f[n][k]<<endl;
	}
	return 0;
}

