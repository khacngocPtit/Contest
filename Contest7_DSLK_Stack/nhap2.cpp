
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;  // So phan tu cua 1 mang
    int a[10000];  // Phan tu trong mang
    int d[100000]={0}; //Mang luu ket qua
    cin >> n;
    for(int i=0;i<n;i++){
        cin >> a[i];
        d[a[i]]++;
    }
    for(int i=0;i<n;i++) {
        cout << d[a[i]] << " ";
    }
}
