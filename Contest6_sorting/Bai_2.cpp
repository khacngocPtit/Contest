#include <bits/stdc++.h>
using namespace std;
/*

*/
struct sorting2 {
	int a,b,i;
};
bool cmp(sorting2 m, sorting2 n) {
	if(m.b > n.b ) return false;
	else if(m.b==n.b && m.i > n.i) return false;
	return true;
}

int main() {
	int t; cin >> t;
	while (t--) {
		int a,x,n;
		cin >> n >> x;
		vector < sorting2 > v(n);
		for(int i=0;i<n;i++){
			cin >> v[i].a;
			v[i].b = abs(x-v[i].a);
			v[i].i=i;
		}
		sort(v.begin(),v.end(),cmp);
		for(int i=0;i<n;i++){
			cout << v[i].a <<" ";
		}
		cout << endl;
	}
	return 0;
}

