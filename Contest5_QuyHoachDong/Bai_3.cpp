#include <bits/stdc++.h>
using namespace std;
/*

*/

int main() {
	int t; cin >> t;
	while (t--) {
		long long s, n, a,dp[40005] = {0};
		dp[0] = 1;
		cin >> n >> s;
		for(int i = 1; i<=n;i++){
			cin >> a;
			dp[a] = 1;
			for(int j=s;j>=a;j--){
				if(dp[j-a] == 1) dp[j] = 1;
			}
		}
		if(dp[s]==1) cout << "YES\n";
		else cout << "NO\n";
		
	}
	return 0;
}

