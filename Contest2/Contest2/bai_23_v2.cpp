#include <iostream>
using namespace std;
int n, a[30][30], kt;
char s[30];
bool b[30][30];
void init() {
	cin >> n;
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= n; j++) {
			cin >> a[i][j];
			b[i][j] = true;
		}
	}
}
void in(int m) {
	for (int i = 0; i < m; i++) {
		cout << s[i];
	}
	cout << " ";
}
void Try(int i, int j, int m) {
	if (a[n][n] == 0 && a[1][1] == 0) {
		cout << -1;
		return;
	}
	if (i == n && j == n) {
		kt = 1; in(m);
		return;
	}
	if (a[i + 1][j] == 1 && b[i + 1][j] && i != n) {
		b[i][j] = false;
		s[m] = 'D';
		Try(i + 1, j, m + 1);
		b[i][j] = true;
	}
	if (a[i][j - 1] == 1 && b[i][j - 1]  && j != n) {
		b[i][j] = false;
		s[m] = 'L';
		Try(i, j - 1, m + 1);
		b[i][j] = true;
	}
	if (a[i][j + 1] == 1 && b[i][j + 1] && j != n) {
		b[i][j] = false;
		s[m] = 'R';
		Try(i, j + 1, m + 1);
		b[i][j] = true;
	}
	if (a[i - 1][j] == 1 && b[i - 1][j] && i!=n) {
		b[i][j] = false;
		s[m] = 'U';
		Try(i - 1, j, m + 1);
		b[i][j] = true;
	}

}
int main() {
	int t; cin >> t;
	while (t--) {
		init();
		Try(1, 1, 0);
		cout << endl;
	}
	return 0;
}