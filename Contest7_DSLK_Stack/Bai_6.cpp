#include<bits/stdc++.h>
using namespace std;

int main() {
    int t; cin >> t;
    cin.ignore();
    while(t--) {
        string s;
        getline(cin,s);
        stack<char>str;
        int res = 0;
        bool ok = true;
        for(int i=0;i<s.size();i++) {
            if(s[i] == '(') {
                str.push(i);
            }
            else if(s[i] == ')') {
                if((res + 2)== i-str.top()-1) {
                    ok = false;
                    break;
                }
                else {
                    res = max(res, i-str.top()-1);
                }
                str.pop();


            }
        }
        if(!ok) cout << "Yes" << endl;
        else cout << "No" << endl;
    }
    return 0;
}
