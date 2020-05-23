#include <bits/stdc++.h>
using namespace std;
/*

*/
int main() {
	int t; cin >> t;
	while (t--) {
		int n, k;
		cin >> n >> k;
		int a, dp[n+5][k];			// dp[i][j] la do dai day con long nhat co thong la j+k,va chon tu a1 -> an
		dp[0][0] = 0;              // Khai bao do dai mac dinh bang 0
		for(int i=1;i<k;i++){
			dp[0][i] = -1005;    //Chon 0 phan tu co tong tu 1 -> k gan gt dp la am vo cung
		}
		for(int i=1;i<=n;i++){
			cin >> a;
			a%=k;
			for(int j=0;j<k;j++){
				dp[i][j] = max(dp[i-1][j], dp[i-1][(j+k-a)%k]+1);
			}
		}
		cout << dp[n][0] << endl; //Chon xong
	}
	return 0;
}

