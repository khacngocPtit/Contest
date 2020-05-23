#include <bits/stdc++.h>
using namespace std;
/*

*/
int main() {
	int t; cin >> t;
	while (t--) {
		string s;
		int res = 1;
		cin >> s;
		//Tam le
		for(int i=0;i<s.size();i++){
			int u,v;
			u = i;v=i;
			while(u>=0&&v<s.size()){ // Duyet sang 2 phia so voi i
				if(s[u] == s[v]){
					res = max(res,v-u+1);
					u--;v++;
				}
				else break;
			}
		}
		//Tam chan
		for(int i=0;i<s.size()-1;i++){
			int u,v;
			u = i;v = i+1;
			while(u>=0&&v<s.size()){
				if(s[u]==s[v]){
					res=max(res,v-u+1);
					u--;v++;
				}
				else break;
			}
		}
		cout << res << endl;
	}
	return 0;
}

