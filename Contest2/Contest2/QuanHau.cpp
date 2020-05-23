#include <iostream>
using namespace std;
int n, Cot[30],Nguoc[30],Xuoi[30],A[30];
int solan = 0;

void in() {
	cout << solan <<" ";
}
void Try(int i) {
	for (int j = 1; j <= n; j++) {
		if (!Cot[j] && !Nguoc[i + j - 1] && !Xuoi[i - j + n]) {
			A[i] = j;
			Cot[j] = 1;
			Nguoc[i + j - 1] = 1;
			Xuoi[i - j + n] = 1;
			if (i == n) {
				solan++;
			}
			else Try(i + 1);
			Cot[j] = 0;
			Nguoc[i + j - 1] = 0;
			Xuoi[i - j + n] = 0;
		}
 }
}
int main() {
	cin >> n;
	Try(1);
	in();
	return 0;
}