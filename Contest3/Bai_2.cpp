#include <bits/stdc++.h>
using namespace std;
int main() {
	long a,b,min,max;
	cin >> a >> b;
	vector <int>s;
	vector<int>t;
	// Phan tich ra cac chu so co trong mang
	while(a!=0) {
		int tmp;
		tmp = a%10;
		s.push_back(tmp);
		a/=10;
	}
	while(b!=0) {
		int tmp;
		tmp = b%10;
		t.push_back(tmp);
		b/=10;
	}
	
	for(int i = 0;i<s.size();i++){
		if(s[i] == 5 ){
			s[i] = 6;
		}
		a =a+ s[i]*pow(10,i);
	}
	for(int i = 0;i<t.size();i++){
		if(t[i] == 5 ){
			t[i] = 6;
		}
		b =b+ t[i]*pow(10,i);
	}
	max = a+b;
	a = 0 ; b =0;
	for(int i = 0;i<s.size();i++){
		if(s[i] == 6 ){
			s[i] = 5;
		}
		a =a+ s[i]*pow(10,i);
	}
	for(int i = 0;i<t.size();i++){
		if(t[i] == 6 ){
			t[i] = 5;
		}
		b =b+ t[i]*pow(10,i);
	}
	min = a+b;
	cout << min << " " << max;
	return 0;
}
