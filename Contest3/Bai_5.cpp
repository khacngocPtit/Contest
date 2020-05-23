#include <bits/stdc++.h>
using namespace std;
int main() {
	long long t,n,k,a[51], suma,sumb ;
	cin >> t;
	while(t--) {
		cin >> n >> k;suma = 0;
		sumb = 0;
		for(long long i = 0 ; i<n;i++){
			cin >> a[i];
		}
		sort(a,a+n);
		if(k > n/2) {
			k = n-k;
		}
		for(int i = 0;i<k;i++){
			suma = suma+a[i];
		}
		for(int i = k ; i<n;i++){
			sumb = sumb+a[i];
		}
		cout << sumb - suma;
		cout << endl;
	}
}
