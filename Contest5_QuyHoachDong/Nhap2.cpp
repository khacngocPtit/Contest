#include <bits/stdc++.h>
using namespace std;
// CAC DANG BAI TOAN LIEN QUAN Cap nhat ma tran
/*
Bai8: Hinh vuong co kich thuoc 2 thi phai ghep voi 3 cai goc => tinh min cua 3 canh
 => kq = max cua f[i][j]

int a[505][505],c[505][505], n,m; //c ghi nhat kich thuoc hinh vuong
int tinh() {
	memset(c,0,sizeof(c));
	int i,j,kq=0;
	for(i=0;i<=m;i++){
		c[0][i] =a[0][i];
	}
	for(i=0;i<=m;i++){
		c[i][0] =a[i][0];
	}
	for(i=1;i<=m;i++){
		for(j=1;j<=m;j++){
			if(a[i][j]){
				c[i][j]=min(c[i-1][j],min(c[i][j-1],c[i-1][j-1]));
				kq=max(kq,c[i][j]);
			}
			
		}
	}
	return kq;
}
int main() {
	int t; cin >> t;
	while (t--) {
		int i,j;
		for(i=1;i<=n;i++){
			for(j=1;j<=m;j++){
				cin >> a[i][j];
			}
		}
		cout << tinh() << endl;
	}
	return 0;
}

int a[1005][1005],c[1005][1005], n,m; //c ghi nhat kich thuoc hinh vuong
int tinh() {
	memset(c,0,sizeof(c));
	int i,j,kq=0;
	for(i=1;i<=m;i++){
		c[1][i] =c[1][i-1] + a[1][i];
	}
	for(i=1;i<=n;i++){
		c[i][1] =c[i-1][1]+ a[i][1];
	}
	for(i=2;i<=n;i++){
		for(j=1;j<=m;j++){
			c[i][j]=min(c[i-1][j],min(c[i][j-1],c[i-1][j-1]))+ a[i][j];
		}
	}
	return c[n][m];
}
int main() {
	int t; cin >> t;
	while (t--) {
		cin >> n >> m;
		int i,j;
		for(i=1;i<=n;i++){
			for(j=1;j<=m;j++){
				cin >> a[i][j];
			}
		}
		cout << tinh() << endl;
	}
	return 0;
}
*/
/*
Bai 28: Thieu thi chen, i kt o xau s1 va j kt o s2 min c[i-1][j] 

int tinh(string s1, string s2) {
	int n=s1.length(), m = s2.length(),i,j;
	int c[105][105]={0};
	//Xau rong + xau co i kt thi => return i 
	for(i=0;i<=n;i++) c[i][0]=i;
	for(i-0;i<=m;i++) c[0][i] =i;
	for(i=1;i<=n;i++){
		for(j=1;j<=m;j++){
			if(s1[i-1]==s2[j-1]){
				c[i][j] =c[i-1][j-1];
			}
			else{
				c[i][j]=min(c[i-1][j],min(c[i][j-1],c[i-1][j-1]))+1;
			}
		}
		return c[n][m];
	}
}
int main() {
	int t;cin >> t;
	while(t--){
		string s1,s2;
		cin >> s1 >> s2;
		cout << tinh(s1,s2) << endl;
	}
}
*/
/*
bai 9: Ma tran c[n][m] co bao nhieu so cho tong bang j

long long m =1e9+7;
int c[105][50005];
void tinh() {
	int i,j,k; // i (1->100) J (1=50005) K = 0 =>9
	for(i=1;i<=9;i++) c[1][i] = 1;
	for(i=1;i<=100;i++) {
		for(j=1;j<=50000;j++){
			for(k=0;k<=9;k++){
				if(k <=j){
					c[i][j] =(c[i][j] + c[i-1][j-k]) %m;
				}
				else {
					break;
				}
			}
		}
	}
	
}
int main() {
	int t,n,k;cin >> t;
	tinh();
	while(t--){
		cin >> n >> k;
		cout << c[n][k] <<endl;
	}
	return 0;
}
*/

