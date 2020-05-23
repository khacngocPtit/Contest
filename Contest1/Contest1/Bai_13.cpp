/*
Bai 13: Sinh xau nhi phan do dai n - k
	Dat 3 Chu A canh ky tu B
*/


#include <bits/stdc++.h>
using namespace std;
int n , k , a[100];
string s = "";
vector<string> res;
void Try(int i) {
	for(int j = 0; j<= 1;j++){
		a[i] = j;
		if(i == n-k){
			for(int l = 1; l <= n-k;l++){
				if(l == 1 && a[l]){
					string tmp= s;
					for(int p = 1 ; p<=n-k;p++){
						if(a[p] == 0) tmp +="A";
						else tmp += "B";
					}
					res.push_back(tmp);
				}
				if(l==n-k && a[l]){
					string tmp= "";
					for(int p = 1 ; p<=n-k;p++){
						if(a[p] == 0) tmp +="A";
						else tmp += "B";
					}
					tmp += s;
					res.push_back(tmp);
				}
				if(a[l] && a[l-1] && l>1){
					string tmp= "";
					for(int p = 1 ; p<=n-k;p++){
						if(l == p) tmp += s;
						if(a[p] == 0) tmp +="A";
						else tmp += "B";
					}
					res.push_back(tmp);
				}
			}
		}
		else Try(i+1);
	}
}
int main() {
	cin >> n >> k;
	for(int i = 0; i<k;i++){
		s+="A";
	}
	Try(1);
	sort(res.begin(),res.end());
	cout << res.size() << "\n";
	for(int i = 0;i<res.size();i++){
		cout << res[i]<<"\n";	}
	return 0;
}

