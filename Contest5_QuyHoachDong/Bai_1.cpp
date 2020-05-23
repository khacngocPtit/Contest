#include <bits/stdc++.h>
using namespace std;
/*
	TH1: F[i,j] = F[i-1][j-1] +1 if s1[i-1] == s2[j-1]
	else F[i][j] = max(F[i-1][j], F[i][j-1]
*/
int F[1002][1002];
int main() {
	int t; cin >> t;
	while (t--) {
		int result = 0;
		string s1,s2;
		cin >> s1 >> s2;
		memset(F,0, sizeof(F));
		for(int i = 1; i <= s1.size(); i++)
		{
			for(int j = 1 ;j <= s2.size(); j++){
				if(s1[i-1] == s2[j-1]) F[i][j] = F[i-1][j-1] + 1;
				else F[i][j] = max(F[i-1][j], F[i][j-1]);
				result = max(result, F[i][j]);
			}
		}
		cout << result << endl;
	}
	return 0;
}

