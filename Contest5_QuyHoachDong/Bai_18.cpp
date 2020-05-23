#include <bits/stdc++.h>
using namespace std;
/*

*/
struct capSo {
	int x,y;
};
bool kt(capSo a, capSo b){
	return a.x < b.x;
}
int main() {
	int t; cin >> t;
	while (t--) {
		int n, kq =0; cin >> n;
		capSo a[n+5];
		int f[n+5];
		for(int i=1;i<=n;i++){
			cin >> a[i].x >> a[i].y;
			f[i] =1;
		}
		sort(a+1,a+1+n,kt);
		for(int i=1;i<=n;i++){
			for(int j=1;j<i;j++){
				if(a[j].y < a[i].x){
					f[i] = max(f[i],f[j]+1);
				}
			}
		}
		cout << f[n] <<endl;
	}
	return 0;
}

