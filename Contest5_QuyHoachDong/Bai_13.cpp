#include <bits/stdc++.h>
using namespace std;
/*

*/
long long n, f[10004];
int tinh() {
	long long i1 = 0, i2=0 , i3 = 0;
	f[0] = 1;
	for(long long i =1; i<n;i++) {
		f[i] = min(f[i1]*2, min(f[i2]*3, f[i3]*5));
		if(f[i] == f[i1]*2){
			i1 = i1+1;
		}
		if(f[i] == f[i2]*3){
			i2 = i2+1;
		}
		if(f[i] == f[i3]*5){
			i3 = i3+1;
		}
	}
	return f[n-1];
}
int main() {
	int t; cin >> t;
	while (t--) {
		cin >> n;
		cout << tinh() <<endl; 
	}
	return 0;
}

