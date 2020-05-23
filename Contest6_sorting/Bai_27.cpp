#include <bits/stdc++.h>
using namespace std;
/*

*/

int main() {
	int n;
	cin >> n;
	int a[n+5];
	for(int i=0;i<n;i++){
		cin >> a[i];
	}
	for(int i=0;i<n-1;i++){
		cout << "Buoc " << i+1 << ": ";
		int min_index=i;
		for(int j=i+1; j<n;j++){
			if(a[min_index] > a[j]) {
				min_index = j;
			}
			
		}
		swap(a[min_index], a[i]);
		for(int j =0;j<n;j++){
			cout << a[j] << " ";
		}
		cout << endl;
	}
	return 0;
}

