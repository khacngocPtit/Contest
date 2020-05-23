#include <bits/stdc++.h>
using namespace std;

int tinh(int n , long long k) {
	if(k % 2 == 1) return 1;// Meo neu k le thi k = 1
	long long x = pow(2,n-1);
	if(k == x) return n;// Neu k o chinh giua thi k = n
	if(k < x) return tinh(n-1,k);// Neu k < n thi o ben trai
	return tinh(n-1,k-x);// Neu k > n thi o ben phai
}
int main() {
	int t,n; cin >> t;
	long long k;
	while (t--) {
		cin >> n >> k;
		cout << tinh(n,k)<<endl;
	}
	return 0;
}

