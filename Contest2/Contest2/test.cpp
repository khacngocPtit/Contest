#include<iostream>
#include<string>

using namespace std;
void lonnhat(string a){
	char max=a[0];
    for(int i=0;i<a.length()-1;i++){
    	if(a[i]<a[i+1])
    	max =a[i+1];
	};
	cout << max;
}
int main(){
	int t;
	cin>>t;
	
	while(t--){
		int k;
		cin >>k;
		string a;
		cin>> a;
		lonnhat(a);
		cout<< endl;
	}
}
