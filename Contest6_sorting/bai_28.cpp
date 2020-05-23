#include <bits/stdc++.h>
using namespace std;
/*

*/

int main() {
	int n;
	cin >> n;
	int a[n+5];
	for(int i=0;i<n;i++){
		cin >> a[i];
	}
	vector <int> b;
	for(int i=0;i<n;i++){
		cout << "Buoc "<< i<<": ";
		b.push_back(a[i]);
		sort(b.begin(),b.end());
		for(int j=0;j<b.size();j++){
			cout << b[j] << " ";
		}
		cout << endl;
	}
	return 0;
}

