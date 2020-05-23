#include <bits/stdc++.h>
using namespace std;
/*
 dAY CON TANG DAI NHAT: 
 	goi dp[i] la do dai day con dai nhat neu a= > a[j] dp[i] = max(dp[i-1], dp[j-1]+1)
*/
int main() {
	int n, a[1005],dp[1005] = {0}, result = 0;
	cin >> n;
	for(int i =1 ;i<=n;i++){
		cin >> a[i];
	}
	for(int i = 1; i<=n ;i++){
		dp[i] = 1 ; //Mac dinh tai
		for(int j = 1 ;j < i ;j++){
			if(a[i] > a[j] ) dp[i] = max(dp[i],dp[j]+1);
			
		}
		result = max(result,dp[i]);
	}
	cout << result;
	return 0;
}

