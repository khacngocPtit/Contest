#include <iostream>
#include <string>
using namespace std;
int A[200], i=0;
void show(int A[],int i){
	if(i==0) cout << "NONE" <<endl;
	else{
		cout << A[i] << endl;
	}
}
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	string str,str2;
	int n;
	cin >> n;
	int num=0;
	for(int j=0;j<=n;++j){
		getline(cin,str);
		if(str == "PRINT") str = "SHOW";
		str2=str.substr(0,4);
		if(str2 == "PUSH"){
			i++;
			str2=str.substr(5);
			num=0;
			for(int k=0;k<str2.size();++k)
				num=num*10+(str2[k]-48);
			A[i]=num;
		//	cout << "i " << i << endl;
		}
		else if(str2=="POP"){
			if(i != 0) {
				i--;
			}
		}
		else if(str2=="SHOW"){
			show(A,i);
		}
		str.clear();
	}
	return 0;
}
