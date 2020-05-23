#include <bits/stdc++.h>
using namespace std;
int n , s[100] ,k;
void Try(int i) {
	for(int j =0 ;j<=1; j++){
		s[i] = j;
		if(i == n) {
			int dem = 0;
			for(int l = 1; l <= n ;l++) {
				if(s[l] == 1) dem++;
			}
			if(dem == k){
				for(int l = 1; l<=n;l++) {
					cout << s[l];
				}
				cout << endl;
			}
		}
		else Try(i+1);
	}
}
int main() {
	int t; cin >> t;
	while (t--) {
		cin >> n >> k;
		Try(1);
	}
	return 0;
}

