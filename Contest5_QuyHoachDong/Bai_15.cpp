#include <bits/stdc++.h>
using namespace std;
/*

*/
int f[101][101][101];
int main() {
	int t; cin >> t;
	while (t--) {
		int n,k,m;
		string s1,s2,s3;
		cin >> n >> k >> m;
		cin >> s1 >> s2 >> s3 ;
		memset(f,0,sizeof(f));
		for(int i=1;i<=n;i++){
			for(int j=1;j<=k;j++){
				for(int l=1;l<=m;l++){
					if(s1[i-1]==s2[j-1]&& s2[j-1]==s3[l-1]){
						f[i][j][l] = f[i-1][j-1][l-1]+1;
					}
					else {
						f[i][j][l] = max(f[i-1][j][l],max(f[i][j-1][l],f[i][j][l-1]));
					}
				}
			}
		}
		cout<<f[n][k][m] << endl;
	}
	return 0;
}

