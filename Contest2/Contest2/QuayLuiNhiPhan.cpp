#include <iostream>
using namespace std;
int n, a[30],k,b[30],c[30],kt ;
void in() {
	int sum, m ;
	sum = 0; m = 0;
	for (int i = 1; i <= n; i++) {
		sum = sum + a[i] * b[i];
	}
	if (sum == k) {
		kt = 1;
		for (int i = 1; i <= n; i++) {
			if (b[i]) {
				c[m] = a[i];
				m++;
			}
		}
		cout << "[";
		for (int i = 0; i < m -1 ; i++) {
			cout << c[i] << " ";
		}
		cout << c[m-1] << "] ";
	}
}
void Try(int i) {
	if (kt) {
		cout << -1;
	}
	else {
		for (int j = 0; j <= 1; j++) {
			b[i] = j;
			if (i == n) {
				in();
			}
			else {
				Try(i + 1);
			}
			kt = 0;
		}
	}
	
}
int main() {
	int t;
	cin >> t;
	while (t--) {
		cin >> n >> k;
		for (int i = 1; i <= n; i++) {
			cin >> a[i];
		}
		Try(1);
	}
	
}
