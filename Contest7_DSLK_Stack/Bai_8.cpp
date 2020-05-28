#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--) {
        string s;
        cin >> s ;
        stack <int> stk;
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
        for(int i = 0;i<s.size();i++) {
            if(s[i] != ')' && s[i] != '(') {
                cout << s[i];
            }
        }
        cout << endl;
    }
    return 0;
}
