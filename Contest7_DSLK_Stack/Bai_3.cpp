#include <bits/stdc++.h>
using namespace std;
#define Max 1000000
/*

*/

size_t split(const string &txt, vector<std::string> &strs, char ch)
{
    size_t pos = txt.find( ch );
    size_t initialPos = 0;
    strs.clear();

    // Decompose statement
    while( pos != std::string::npos ) {
        strs.push_back( txt.substr( initialPos, pos - initialPos ) );
        initialPos = pos + 1;

        pos = txt.find( ch, initialPos );
    }

    // Add the last one
    strs.push_back( txt.substr( initialPos, std::min( pos, txt.size() ) - initialPos + 1 ) );

    return strs.size();
}

int main() {
	int t; 
	cin >> t;
	vector<string> ss;
	string s;
	cin.ignore();
	while(t--){
		getline(cin, s);
		split(s,ss,' ');
		for(int i=0;i<ss.size();i++){
			for(int j = ss[i].size()-1;j>=0;j--){
				cout << ss[i][j];
			}
			cout <<" ";
		}
		cout << "\n";
	}	
	return 0;
}

