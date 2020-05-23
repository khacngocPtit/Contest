#include <bits/stdc++.h>
using namespace std;
/*
so sanh vi tri can tim voi n-2 
neu lon hon thi tim ben trai
neu nho hon thi tim ben phai
*/
long long F[100];
char FiboW(int n, long long k) {
	if(n==1) return 'A';
	if(n == 2) return 'B';
	if(k <= F[n-2]) return FiboW(n-2,k);
	return FiboW(n-1,k = F[n-2]);
}
int main() {
	int t,n; cin >> t;
	while(t--){
		long long k ;
		F[1] = 1 ; F[2] = 1;
		for(int i = 3; i<=92 ;i++) F[i] = F[i-1]+F[i-2];
		while (t--) {
			cin >> n >> k;
			cout << FiboW(n,k)<<endl;
		}
	}
	
	return 0;
}

