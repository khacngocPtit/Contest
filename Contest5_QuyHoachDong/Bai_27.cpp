#include <bits/stdc++.h>
using namespace std;
/*

*/
struct tui{
	int a;
	int c;
};
int f[1005][1005];

int main() {
	int n,v;
	cin >> n >> v;
	tui t[n+1];
	for(int i = 1;i<=n;i++) 
		cin >> t[i].a;
	for(int i = 1;i<=n;i++) 
		cin >> t[i].c;
	memset(f,0,sizeof(f));
	for(int i=1;i<=n;i++){
		for(int j=1;j<=v;j++){
			if(j>=t[i].a){
				f[i][j] = max(f[i-1][j],f[i-1][j-t[i].a]+t[i].c);
			}
			else f[i][j]=f[i-1][j];
		}
	}
	cout << f[n][v]<<endl;
	
	return 0;
}

