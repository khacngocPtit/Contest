#include <bits/stdc++.h>
using namespace std;
/*

*/

int main() {
	int t;
	cin >> t;
	while(t--){
		int n,a[105],f1[105],f2[105], i,j,kq=0;
		cin >> n;
		for(int i=1;i<=n;i++) {
			cin >> a[i];
			f1[i] =a[i];
			f2[i] =a[i];
		}
		for(i=1;i<n;i++){
			for(j=1;j<i;j++){
				if(a[j]<a[i]){
					f1[i] = max(f1[i],f1[j]+a[i]);
				}
			}
		}
		for(i=n-1;i>=0;i--){
			for(j=n;j>i;j--){
				if(a[j]<a[i]){
					f2[i] = max(f2[i],f2[j]+a[i]);
				}
			}
		}
		for(int i=1;i<=n;i++){
			kq = max(kq,f1[i]+f2[i]-a[i]);
		}
		cout << kq<<endl;
	}
	
}
