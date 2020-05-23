#include <bits/stdc++.h>
using namespace std;
/*

*/
struct data {
	int val, count;
};
bool cmp(data a, data b) {
	if(a.count > b.count) return true;
	else if(a.count == b.count && a.val < b.val) return true;
	return false;
}
int main() {
	int t; cin >> t;
	while (t--) {
		int n;
		cin >> n;
		data a[n+5];
		int d[100005] = {0};
		for(int i=0;i<n;i++){
			cin >> a[i].val;
			d[a[i].val]++;
		}
		for(int i=0;i<n;i++){
			a[i].count = d[a[i].val];
		}
		sort(a,a+n,cmp);
		for(int i=0;i<n;i++){
			cout << a[i].val << " ";
		}
		cout << endl;
	}
	return 0;
}

