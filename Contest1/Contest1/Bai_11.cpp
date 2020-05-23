
#include <bits/stdc++.h>
using namespace std;

int main() {
	int t; cin >> t;
	while (t--) {
		string s ,b = "";
		cin >> s;
		b= s[0];
		for(int i = 1 ;i<s.size() ;i++){
			int n = b.size() -1;
			if(b[n] != s[i]) b+="1";
			else b +="0";
		}
		cout << b << endl;
	}
	return 0;
}

