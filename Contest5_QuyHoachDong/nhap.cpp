#include <bits/stdc++.h>
using namespace std;

// 	NHOM BAI TAP CONG DON ket qua
/*
Bai 7:

long long f[100000];
long long m =1e9+7;
int tinh(int n,int k) {
	int i,j;
	memset(f,0,sizeof(f));
	f[0] =1;
	f[1] = 1;
	for(i=2;i<=n;i++){
		for(j=1; j<=i && j<=k;j++){
			f[i] = (f[i] +f[i-j])%m; 
		}
	}
	return f[n];
}
int main() {
	int t; cin >> t;
	while (t--) {
		int n , k;
		cin >> n >> k;
		cout << tinh(n,k) << endl;
	}
	return 0;
}
*/
// Bai 20: 
/*
	Vi tri thu i co i so cach chon 

long long tinh(string s) {
	long long f[15],kq=0; int i,n=s.length();
	memset(f,0,sizeof(f));
	f[0]=s[0]-'0';
	
	kq=f[0];
	for(i=0;i<n;i++){
		f[i]=f[i-1]*10 + (i+1)*(s[i]-'0');
		kq=kq+f[i];
	}
	return kq;
}
int main() {
	int t; string s;
	cin >> t;
	while(t--) {
		cin >> s;
		cout << tinh(s) << endl;
	}
}
*/
/*
mang k phan tu
f[i] co bao nhieu cach tinh ra  => f[k]

 long long m =1e9+7;
 int a[1004], f[1005], n ,k;
 int tinh() {
 	memset(f,0,sizeof(f));
 	int i,j;
 	f[0] = 1;
 	for(int i=1;i<=k;i++){
 		for(j=1;j<=n;j++){
 			if(a[j ]<=i){
			 f[i] = (f[i] + f[i-a[j]])%m;	
			}
		 }
	 }
	return f[k];
 }
int main() {
	int t;
	cin >> t;
	while(t--){
		cin >> n >> k;
		for(int i=1;i<=n;i++) cin >> a[i];
		cout << tinh() << endl;
	}
	return 0;
}
 */
 /*
  Bai 29: So cach giai ma = 
*/
 int tinh(string s) {
 	int n = s.length(),i,f[50]={0};
	if(s[0] == '0') return 0;
 	f[0]=1; // Neu toi ghep dc kt truoc no
 	f[1] =1;
 	for(i=2;i<=n;i++){
 		if(s[i-1]!='0') f[i]=f[i-1];
 		if(s[i-2]=='1'|| (s[i-2] =='2' && s[i-1]<'7')){
 			f[i] =f[i] + f[i-2];
		 }
	 }
 	return f[n];
 	
 }
 int main() {
 	int t;
 	cin >> t;
 	while(t--) {
 		string s;
 		cin >> s;
 		cout << tinh(s) <<endl;
	 }
	 return 0;
 }
  
  /*
  
  
  int f[10005];
  void tinh() {
  	int i,j;
  	for(i=1;i<=10000;i++){
  		f[i]=i;
	  	for(j=1;j<=sqrt(i);j++){
			f[i] = min(f[i],f[i-j*j]+1);
	  	}
	  }
	  
  }
  
  int main() {
  	
  	int t;cin >> t;
  	tinh();
  	while(t--){
  		int n;
  		cin >> n;
  		cout << f[n]<<endl;
	  }
  }
  */
