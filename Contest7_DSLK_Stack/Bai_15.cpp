#include <bits/stdc++.h>
using namespace std;
string hauto_trungto(string s){
    int n = s.size(), i;
    stack<string>stk;
    for(i=0;i<n;i++){
        if(s[i] == '+'||s[i]=='*'||s[i]=='-'||s[i]=='/'){
            string a = stk.top(); stk.pop();
            string b = stk.top(); stk.pop();
            string tmp = '('+b+s[i]+a+')';
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
    while(t--) {
        string s;
        cin >> s;
        cout << hauto_trungto(s) << endl;
    }
}
