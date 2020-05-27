#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    cin.ignore();
    while(t--) {
        string s;
        stack <int> stk;
        cin >> s;
        stk.push(-1);\
        int res = 0;
        for(int i=0;i<s.size();i++){
            if(s[i] == '('){
                stk.push(i);
            }
            else {
                stk.pop();
                if(stk.size() > 0) {
                    res = max(res,i-stk.top());
                }
                else {
                    stk.push(i);
                }
            }
        }
        cout << res <<endl;
    }
}
