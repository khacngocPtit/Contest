#include <bits/stdc++.h>
using namespace std;
const long long mod = 1e9+7;
int main() {
	int t;
	cin >> t;
	while(t--) {
		long long sum;
		int n;
		cin >> n; sum = 0;
		long long a[n];
		for(long long i = 0; i<n;i++){
			cin >> a[i];
		}
		sort(a,a+n);
		for(long long i =0 ; i< n;i++){
			sum += a[i]*i;
			sum = sum % mod;
		}
		cout << sum;
		cout << endl;
	}
	return 0;
}
