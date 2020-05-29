#include <bits/stdc++.h>
using namespace std;
int uutien(char s) {
    if(s == '^') return 3;
    else if(s == '*' || s == '/' || s == '%') return 2;
    else if(s == '+' || s == '-') return 1;
    else return 0;
}

void trungto_hauto(string s) {
    int n = s.size();
    int i;
    stack<char>stk;
    string res="";
    for(i = 0;i<n;i++) {
        if(s[i] == '(') stk.push(s[i]);
        else if(islower(s[i])) res+=s[i];
        else if(s[i] == ')') {
            while(!stk.empty() && stk.top() != '(') {
                char c = stk.top();
                stk.pop();
                res+=c;
            }
            if(stk.top() =='(') stk.pop();
        }
        else {
                while(!stk.empty() && uutien(s[i]) <= uutien(stk.top())) {
                    char d = stk.top(); stk.pop();
                    res+=d;
                }
                stk.push(s[i]);
            }

    }
    while(!stk.empty() && stk.top() != '(') {
            char c = stk.top();
            stk.pop();
            res+=c;
        }
    cout << res ;
}
int main() {
    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        trungto_hauto(s);
        cout << endl;
    }
    return 0;
}
