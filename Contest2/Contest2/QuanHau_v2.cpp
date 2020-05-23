#include <iostream>
#include <algorithm>
using namespace std;
int n, Cot[30], Nguoc[65], Xuoi[65], A[65],Val[10][10],res = 0;

void init() {
	n = 8;
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= n; j++) {
			cin >> Val[i][j];
		}
	}
}
void Try(int i) {
	for (int j = 1; j <= n; j++) {
		if (!Cot[j] && !Nguoc[i + j - 1] && !Xuoi[i - j + n]) {
			A[i] = j;
			Cot[j] = 1;
			Nguoc[i + j - 1] = 1;
			Xuoi[i - j + n] = 1;
			if (i == n) {
				int ans = 0;
				for (int k = 1; k <= n; k++) {
					ans += Val[k][A[k]];
					res = max(res, ans);
				}
			}
			else Try(i + 1);
			Cot[j] = 0;
			Nguoc[i + j - 1] = 0;
			Xuoi[i - j + n] = 0;
		}
	}
}
int main() {
	int t; cin >> t;
	while (t--) {
		init();
		Try(1);
		cout << res;
		cout << endl;
	}
	
	return 0;
}
