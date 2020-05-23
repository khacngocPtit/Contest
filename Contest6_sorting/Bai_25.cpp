#include <bits/stdc++.h>
using namespace std;
/*

*/
bool chuaxet[(int)1e7+1];
int main() {
	int t; cin >> t;
	while (t--) {
		memset(chuaxet,false,sizeof(chuaxet));
		long n;
		cin >> n;
		vector< long > a;
		long val;
		for(int i = 0;i<n;i++){
			cin >> val;
			if(!chuaxet[val]){
				chuaxet[val] = true;
				a.push_back(val);
			}
			
			
			
		}
		if(a.size() < 2) cout << -1 << endl;
		else {
			sort(a.begin(), a.end());
			cout << a[0] << " "<<a[1];
			cout << endl;
		}
		
	}
	return 0;
}

