#include <bits/stdc++.h>
using namespace std;
bool ktra(long long n , long long a[], long long b[]){
	for (long long i = 0; i<n ;i++){
			if(a[i] != b[n-1-i] && a[i] != b[i]) {
				return false;
				break;
			}
		}
	return true;
}
int main() {
	long long t,n,k,a[51] , b[51],i ;
	cin >> t;
	while(t--) {
		cin >> n ;
		for(long long i = 0 ; i<n;i++){
			cin >> a[i];
			b[i] = a[i];
		}
		sort(a,a+n);
		if(ktra(n,a,b)){
			cout << "Yes";
		}
		else {
			cout << "No";
		}
//		
//		cout << endl;
//		for (int i = 0; i<n ;i++){
//			cout << b[i] << " ";
//		}

		
		cout << endl;
	}
}
