#include <bits/stdc++.h>
using namespace std;
/*

*/
int main() {
	int n;
	cin >> n;
	int arr[n+5];
	for(int i=0;i<n;i++){
		cin >> arr[i];
	}
	int step = 0;
	for(int i=0;i<n-1;i++){
		cout << "Buoc " << i+1 <<": ";
		for(int j=i+1;j<n;j++){
			if(arr[i] > arr[j]) swap(arr[i],arr[j]);
		}
		for(int j=0;j<n;j++){
			cout << arr[j] <<" ";
		}
		cout << endl;
	}
	return 0;
}

