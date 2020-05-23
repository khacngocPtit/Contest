#include <bits/stdc++.h>
using namespace std;
/*
	Sinh hoan vi roi xu ly:
		
*/
int n, k , result;
int a[50][50];
int x[50];
bool ok[50] ;
vector <int> Res;
void Try(int i) {
	for(int j = 1; j<=n ;j++){
		if(!ok[j]){
			x[i] = j;
			ok[j] = true;
			if(i==n) {
				result = 0;
				for(int l =1; l<=n;l++){
					result+=a[l][x[l]];
				
				}
				if(result == k) {
					for(int l = 1; l <= n ;l++) {
						Res.push_back(x[l]);
					}
				}
			}	
			else{
				Try(i+1);
			}
			ok[j] = false;
		}
	}
}
int main() {
	
	cin >> n >> k;
	for(int i = 1; i<=n ;i++){
		for(int j = 1; j<=n ;j++){
			cin >> a[i][j];
		}
	} 
	Try(1);
	cout << Res.size()/n << "\n";
	for(int i = 0 ; i< Res.size(); i++){
		if(i %n == 0) {
			cout << "\n";
		}
		cout << Res[i] << " ";
	}
	return 0;
}

