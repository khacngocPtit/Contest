#include <bits/stdc++.h>
using namespace std;
/*
Chia de tri

=> Muc tieu: Giam thoi gian chay
=> Ap dung de quy theo 3 buoc:
	b1: (chia) Chia thanh cac bài toán con có cifng kieu voi bài toán lon
	b2: (tri) Giai bai toan con.
	b3: Ket noi


 Tong quat
void solve (int a) {
	if (n == 0) {
		return;
	}
	solve(n/2);
	solve(n/2);
	for(int i = 0 ; i<n;i++) {
		tinh toan
	}	
}
Bai toan day con lien tuc lon nhat: 
Bai 21 (contest 4)
*/
int M = 1e9+7;
long long powerM(int n ,int k ) {
	if(k == 0) return 1;
	long long x = powerM(n ,k/2);
	if(k%2==0) return x *x % M;
	return (n* x* x% M) % M;
}
int main() {
	int t, n,k;
	cin >> t ;
	while(t--) {
		cin >> n >> k;
		cout << powerM(n,k) << endl;
	}
	return 0;
}

