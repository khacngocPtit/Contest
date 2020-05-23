#include <iostream>
using namespace std;
int n, a[20];
void Result() {
	cout << "[";
	for (int i = 1; i <= n; i++) {
		cout << a[i];
		if (n!=1)
			cout << " ";
	}
	cout << "]";
	if (n != 1) cout << endl;
}
void dequy(int i) {
	a[i] = a[i] + a[i + 1];
	if (i == n - 1) {
		n = n - 1;
		Result();
		i = 0;
	}
	if (n != 1) dequy(i + 1);
}
int main() {
	int t;
	cin >> t;
	while (t--) {
		cin >> n;
		for (int i = 1; i <= n; i++) {
			cin >> a[i];
		}
		Result();
		dequy(1);
		cout << endl;
	}
}