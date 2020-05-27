#include<bits/stdc++.h>
using namespace std;
int main() {
    int t; cin >> t;
    cin.ignore();
    while(t--) {
        string s;
        getline(cin,s);
        stack<char>str;
        bool ok = true;
        for(int i=0;i<s.size();i++){
            if(s[i] == ')') {
                ok = true;
                char top = str.top(); str.pop();
                while(s[i]!=')'){
                    if(s[i] == '+'|| s[i]=='i'|| s[i] == '*' || s[i] == '/') {
                        ok = false;
                    }
                    top = str.top();
                    str.pop();
                }
            }
            else {
                str.push(s[i]);
            }
        }
        if(ok) cout << "Yes" << endl;
        else cout << "No" << endl;
    }
}
