#include <bits/stdc++.h>
using namespace std;
/*

*/
int tinh(int a[] , int n){
	int f[1005],i,j, kq= 0;
	for(i=1;i<=n;i++){
		f[i]=1;
		for(j=1;j<i;j++){
			if(a[i]<=a[j]){
				f[i] = max(f[i],f[j]+1);
			}
		}
		kq=max(kq,f[i]);
	}
	return n-kq;
}
int main() {
	int t;
	cin >> t;
	while(t--){
		int n,a[1005];
		cin >> n;
		for(int i=1;i<=n;i++) cin >> a[i];
		cout << tinh(a,n)<<endl;
	}
	
}
