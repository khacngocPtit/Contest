#include <iostream>
using namespace std;
int n, k, m, a[50] , d;
void in() {
	int t = 0;
	for (int i = 1; i <= k; i++) {
		t = t + a[i];
	}
	if (t == m) d++;
}
void Try(int i) {
	for (int j = a[i - 1] + 1; j <= n - k + i; j++) {
		a[i] = j;
		if (i == k) in();
		else Try(i + 1);
	}
}
int main() {
	cin >> n >> k >> m; d = 0;
	Try(1);
	cout << d;
	return 0;
}