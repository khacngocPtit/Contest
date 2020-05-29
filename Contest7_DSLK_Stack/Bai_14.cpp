#include <bits/stdc++.h>
using namespace std;
string tiento_hauto(string s) {
    int n = s.size(), i;
    stack<string>stk;
    for(i=0;i<n;i++){
        if(s[i] == '+' || s[i] == '-'|| s[i] == '*'|| s[i] == '/'){
            string a = stk.top(); stk.pop();
            string b = stk.top(); stk.pop();
            string tmp = s[i]+b+a;
            stk.push(tmp);
        }
        else {
            string save;
            save+=s[i];
            stk.push(save);
        }
    }
    return stk.top();
}
int main() {
    int t;
    cin >> t;
    cin.ignore();
    while(t--) {
        string s;
        getline(cin,s);
        cout << tiento_hauto(s) << endl;
    }
}
