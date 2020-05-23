#include <bits/stdc++.h>
using namespace std;
/*
 Bai 3:
*/
const long long mod =  1e9+7;
int main() {
	int t; cin >> t;
	while (t--) {
		long long n , a[100000];
		 cin >> n;
		 for(long long i = 0 ; i< n ;i++){
		 	cin >> a[i];
		 }
		 sort(a, a+n);
		long long sum = 0;
		for(long long i = 0 ; i< n ;i++) {
			sum += a[i]*i;
			sum = sum % mod;
		}
		cout << sum <<endl;
	}
	return 0;
}

