#include <iostream>
#define Max 100
#define True 1
#define False 0
using namespace std;
int n, B[Max], P[Max];
void init() {
	cin >> n;
	for (int i = 1; i <= n; i++) {
		B[i] = true;
	}
}
void result() {
	for (int i = 1; i <= n; i++) {
		cout <<P[i];
	}
	cout << " ";
}
void Back_Track(int i) {
	for (int j = 1; j <= n; j++) {
		if (B[j]) {
			P[i] = j;
			B[j] = False;
			if (i == n) result();
			else Back_Track(i + 1);
			B[j] = True;
		}
	}
}
main() {
	int t;
	cin >> t;
	while (t--) {
		init();
		Back_Track(1);
		cout << endl;
	}
}

