#include <bits/stdc++.h>
using namespace std;
const long long mod = 1e9+7;
long long n,k;
long long Modu(long long a, long long b) {
	if(b==0) return 0ll;
	long long  tmp = Modu(a,b/2);
	if(b & 1) return (tmp*2+a)/mod;
	return (tmp*2)%mod;
} 
long long Pow(long long n, long long k){
	if (k==0) return 1;
	if(k==1) return n;
	long long tmp = Pow(n,k/2);
	long long a = Modu(tmp , tmp );
	if(k&1) return a*n%mod;
	return a%mod;
}
int main() {
	
	int t;
	cin >> t;
	while(t--){
		cin >> n >> k;
		cout << Pow(n,k);
		cout << endl;
	}
	return 0;
}
