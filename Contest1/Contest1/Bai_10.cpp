//Bai 10 : day s duoc sinh ra khi tong s[i] = s[i] + s[i-1] neu 1 + 1 && 0 + 0 => 0 || 1 + 0 && 0 + 1  => 1

#include <bits/stdc++.h>
using namespace std;
int main() {
	int t; cin >> t;
	while(t--) {
		string s;
		cin >> s;
		for(int i = 0; i< s.size() ; i++){
			if(i == 0) cout << s[i];
			else {
				if(s[i] != s[i-1]) cout << 1; // so sanh 2 so ke tiep
				else cout << 0;
			}
		}
		cout << endl;
	}
	return 0;
}
