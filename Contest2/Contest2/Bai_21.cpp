#include <iostream>
#include <string.h>
using namespace std;
int n, kt[30],a[30];
string s;
void init() {
	for (int i = 0; i < n; i++) {
		kt[i] = true;
	}
}
void in() {
	for (int i = 1; i <= n; i++) {
		cout << s[a[i]];
	}
	cout << " ";
}
void Try(int i) {
	for (int j = 0; j < n; j++) {
		if (kt[j]) {
			a[i] = j;
			kt[j] = false;
			if (i == n) in();
			else Try(i + 1);
			kt[j] = true;
		}
	}
}
int main() {
	int t; cin >> t;
	while (t--) {
		cin >> s;
		n = s.length();
		init();
		Try(1);
		cout << endl;
	}
	return 0;
}
