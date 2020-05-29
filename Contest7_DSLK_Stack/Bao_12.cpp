#include <bits/stdc++.h>
using namespace std;

string tiento_trungto(string s) {
    int n = s.size();
    int i;
    stack <string>stk;
    for(i=n-1;i>=0;i--){
        if(s[i] == '+' || s[i] == '-' || s[i] == '*' || s[i] == '/') {
            string a = stk.top(); stk.pop();
            string b = stk.top(); stk.pop();
            string tmp = '(' + a + s[i] + b + ')';
            stk.push(tmp);
        }
        else {
            string save ;
            save += s[i];
            stk.push(save);
        }
    }
    return stk.top();
}
int main() {
    int t;
    cin >> t;
    while(t--) {
        string s;cin >> s;
        cout << tiento_trungto(s);
        cout << endl;
    }
}
