#include <iostream>
#include <string>
using namespace std;

int main() {
	string bit;
	int T,n,i;
	cin >> T;
	while (T--) {
		cin >> bit;
		i = bit.length()-1;
		while (i >= 0 && bit[i] == '1') {
			bit[i] = '0';
			i--;
		}
		if (i >= 0) bit[i] = '1';
		cout << bit<<endl;
		
	}
	return 0;
}
