#include<iostream>
#define Max 100
#define True 1
#define False 0
using namespace std;
int n, c[Max], k, Stop;
void init() {
	cin >> n;
	k = 1;
	c[k] = n;
}
void result() {
	cout << "(";
	for (int i = 1; i <= k; i++) {
		cout <<c[i]<<" ";
	}
	cout <<")"<<" ";
}
void Next_Division() {
	int i, j, R, S, D;
	i = k;
	while (i > 0 && c[i] == 1) {
		i--;
	}
	if (i > 0) {
		c[i] = c[i] - 1;
		D = k - i + 1;
		R = D / c[i];
		S = D % c[i];
		k = i;
		if (R > 0) {
			for (j = i + 1; j <= i + R; j++) {
				c[j] = c[i];
			}
			k = k + R;
		}
		if (S > 0) {
			k = k + 1;
			c[k] = S;
		}
	}
	else Stop = True;
}
void Divition() {
	Stop = False;
	while (!Stop) {
		result();
		Next_Division();
	}
}
main() {
	int t; cin >> t;
	while (t--) {
		init();
		Divition();
		cout << endl;
	}
}

