#include <bits/stdc++.h>
using namespace std;
int main() {
	int t ; cin >>t;
	long long n,a[100000],sum;
	
	while(t--){
		cin >> n;sum = 0;
		for(int i = 0;i<n;i++) cin >> a[i];
		sort(a,a+n,greater<int>());
		for(int i = 0;i<n-1;i++) {
			if(i!=n-2){
				sum = sum + a[i]*(i+1);
			}
			else sum=sum+(a[n-1] + a[n-2])*(i+1);
		}
		cout << sum;
		cout << endl;
	}
}
