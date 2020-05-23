
#include <bits/stdc++.h>
using namespace std;
int n,k,a[100];
/*
	Sinh to hop: 
		sinh to hop ke tiep roi so sanh voi to hop hien tai => so nguoi linh duoc nghi

*/
int main() {
	int t; cin >> t;
	while (t--) {
		int n,k,a[100];
		int d[100] = {0};
		cin >>  n >> k;
		for(int i = 1 ; i<=k ;i++){
			cin >> a[i];
			d[a[i]] = 1;
		}
		// Sinh cau hinh cua hoan vi ke tiep
		int i = k ;
		while(i> 0 && a[i]==n-k+i){
			i--;
		}
		if(i <= 0) cout << k << endl;
		else {
			a[i] += 1;
			for(int j = i+1; j <= k ;j++){
				a[j] = a[j-1] + 1;
			}
			for(int j = 1; j<=k ;j++){
				d[a[j]] = 0;
			}
			int result  = 0;
			for(int i = 1; i<=40 ;i++){
				if(d[i] == 1) {
					result++;
				}
			}
			cout << result << endl;
		}
	}
	return 0;
}

