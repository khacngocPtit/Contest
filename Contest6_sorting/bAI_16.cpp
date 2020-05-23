#include <bits/stdc++.h>
using namespace std;
/*

*/
int Partition(int arr[], int l, int h){
	int x = arr[h];
	int i = l-1;
	for(int j = l;j<=h-1;j++){
		if(arr[j] < x) {
			i++;
			swap(arr[i],arr[j]);
		}
	
	}
	swap(arr[i+1],arr[h]);
	return i+1;
}
void quickSort(int arr[], int l, int h) {
	if(l <h) {
		int p = Partition(arr,l,h);
		quickSort(arr,l,p-1);
		quickSort(arr,p+1,h);
	}
}
int main() {
	int t; cin >> t;
	while (t--) {
		int n;
		cin >> n;
		int arr[n+5];
		int l = 0,h=n-1;
		for(int i=0;i<n;i++){
			cin >> arr[i];
		}
		quickSort(arr,l,h);
		for(int i=0;i<n;i++){
			cout <<arr[i] <<" ";
		}
		cout << endl;
	}
	return 0;
}

