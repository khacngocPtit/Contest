#include <iostream>
#include <string>
using namespace std;
int A[200], i=0;
void show(int A[],int i){
	if(i==0) cout << "empty" <<endl;
	else{
		for(int j=1;j<=i;++j)
			cout << A[j] << " ";
		cout << endl;
	}
}
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	string str,str2;
	int num=0;
	for(int j=0;j<1000;++j){
		getline(cin,str);
		str2=str.substr(0,4);
		if(str2 == "push"){
			i++;
			str2=str.substr(5);
			num=0;
			for(int k=0;k<str2.size();++k)
				num=num*10+(str2[k]-48);
			A[i]=num;
		//	cout << "i " << i << endl;
		}
		else if(str2=="pop"){
			i--;
		}
		else if(str2=="show"){
			show(A,i);
		}
		str.clear();
	}
	return 0;
}
