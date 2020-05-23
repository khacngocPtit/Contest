#include <bits/stdc++.h>
using namespace std;
/*

*/
struct sorting3 {
	int val , pos;
};
bool cmp(sorting3 a,sorting3 b){
	if(a.val < b.val) return true;
	else if(a.val == b.val&& a.pos < b.pos) return true;
	return false;
}
int main() {
	int t; cin >> t;
	while (t--) {
		int n;
		cin >> n;
		vector < sorting3 > a(n);
		for(int i=0;i<n;i++){
			cin >> a[i].val;
			a[i].pos = i;
		}
		sort(a.begin(),a.end(),cmp);
		int res = 0;
		for(int i=0;i<n;i++){
			while(a[i].pos != i) {
				res++;
				swap(a[i],a[a[i].pos]);
			}
		}
		cout << res <<endl;
	}
	return 0;
}

