#include <iostream>
using namespace std;
int n, k, a[1000];
void init() {
	for (int i = 1; i <= k; i++) {
		cin >> a[i];
	}
}
void result() {
	for (int i = 1; i <= k; i++) {
		cout << a[i] << " ";
	}
}
void Cau_hinh_ke_tiep(int i) {
	init();
	i = k;
	while (a[i] == n - k + i && i>0 ) {
		i--;
	}
	if (i > 0) {
		a[i] = a[i] + 1;
		for (int j = i + 1; j <= k; j++) {
			a[j] = a[i] - i + j;
		}
	}
	else {
		for(int i = 1; i <= k ; i++){
			a[i] = i;
		}
	}
}
main() {
	int t;
	cin >> t;
	while (t--) {
		cin >> n >> k;
		
		Cau_hinh_ke_tiep(1);result();
		cout << endl;
	}
}
