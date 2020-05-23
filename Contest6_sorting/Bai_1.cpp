#include <bits/stdc++.h>
using namespace std;
/*

*/
int main() {
	int t; cin >> t;
	while (t--) {
		int n;
		cin >> n;
		int a[n+5];
		for(int i=0;i<n;i++){
			cin >> a[i];
		}
		sort(a,a+n);
		int Max=n-1;
		int Min=0;
		for(int i=0;i<n;i++){
			if(i%2==0){
				cout << a[Max] <<" ";
				Max--;
			}
			else {
				cout << a[Min] << " ";
				Min++;
			}
		}
		cout << endl;
	}
	return 0;
}

