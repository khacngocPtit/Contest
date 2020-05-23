#include<iostream>
using namespace std;
int n, a[1000];
void init() {
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
	}
}
void result() {
	for (int i = 1; i <= n; i++) {
		cout << a[i] << " ";
	}
}
void Sinh_Cau_Hinh_Ke_Tiep() {
	init();
	int j, k, r, s, temp;
	j = n - 1;
	while (j > 0 && a[j] > a[j + 1])
		j--;
	if (j == 0)
		for (int i = 1; i <= n; i++) {
			a[i] = i;
		}
	else {
		k = n;
		while (a[j] > a[k]) k--;
		temp = a[j]; a[j] = a[k]; a[k] = temp;
		r = j + 1; s = n;
		while (r < s) {
			temp = a[r]; a[r] = a[s]; a[s] = temp;
			r++; s--;
		}
	}
}
main() {
	int t; cin >> t;
	while (t--) {
		cin >> n;
		Sinh_Cau_Hinh_Ke_Tiep();
		result();
		cout << endl;
	}
}
