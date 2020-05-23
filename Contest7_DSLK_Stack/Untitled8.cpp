#include <bits/stdc++.h>
#include <stack>
using namespace std;
/*

*/
void wagain(string s, int start , int end,int size){
	for(int i=end;i<size;++i)
		s[i]=s[i+1];
	for(int i=start;i<size;++i)
		s[i]=s[i+1];
	size-=2;
	for(int i=0;i<size;++i) cout << s[i];
	cout << endl;
}
void process(string str){
	stack<char> s;
	int start=0;
	int end=0;
	int size=str.size();
	bool dau=1; 			//0 == tru 1 == cong
	for(int i=0;i<size;++i)
		if(str[i]=='(')
			s.push(i);
		else if	(str[i]==')'&&!s.empty()){
			cout << "i" << i << endl;
			start=s.top();
			end=i;
			if(str[start-1]=='-')	dau=0;
			if(dau==0)
				for(int i=start+1;i<end;++i)
					if(str[i]=='-') str[i]='+';
					else if(str[i]=='+') str[i]='-';
			wagain(str,start,end,size);
			dau=1;
			s.pop();
			i--;
		}	
}
int main() {
	int t; cin >> t;
	string str;
	cin.ignore(256,'\n');
	while (t--) {
		getline(cin,str);
		process(str);
		str.clear();
	}
	return 0;
}

