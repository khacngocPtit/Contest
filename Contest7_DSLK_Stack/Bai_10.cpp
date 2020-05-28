#include <bits/stdc++.h>
using namespace std;
string test_case(string s) {
    stack <int> stk;
    string save;
    for(int i = 0;i<s.size();i++) {
        if(s[i]=='(') {
            stk.push(i);
        }
        else if(s[i] ==')') {
            if(s[stk.top()-1] == '-') {
                for(int j = stk.top(); j<i;j++) {
                    if(s[j] == '-') {
                        s[j] = '+';
                    }
                    else if(s[j] == '+') {
                        s[j] = '-';
                    }
                }
            }
            stk.pop();
        }

    }
    for(int i=0;i<s.size();++i){
        if(s[i]!='('&&s[i]!= ')'){
            save+=s[i];
        }
    }
    return save;
}

int main() {
    int t;
    cin >> t;
    while(t--) {
        string s1, s2;
        cin >> s1 >> s2;
        s1 = test_case(s1);
        s2 = test_case(s2);
        if(s1 == s2) cout << "YES" << endl;
        else cout << "NO" << endl;

    }
    return 0;
}
