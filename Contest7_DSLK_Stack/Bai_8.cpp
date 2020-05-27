#include <bits/stdc++.h>
using namespace std;
char test_case(string s) {
    stack <int> stk; // stack stk chi nhan vao 2 gia tri 0 , 1 se biet dien trang thai cua dau truoc dau ngoac
    stk.push(0);
    char* res = new char(s.size());
    int index = 0, i=0;
    while(i < s.size()) {
        if(s[i] == '+') {
            if(stk.top()==1) {
                res[index++] = '-';
            }
            else if(stk.top() == 0) {
                res[index++] = '+';
            }
        }
        else if(s[i] == '-') {
            if(stk.top() == 1) {
                res[index++] = '+';
            }
            else if(stk.top() == 0){
                res[index++] = '-';
            }
        }
        else if(s[i] == '(' && i > 0) {
            if(s[i-1] == '-') {
                int x = (stk.top() == 1) ? 0:1;
                stk.push(x);
            }
            else if(s[i-1] == '+') {
                stk.push(stk.top());
            }
        }
        else if(s[i] == ')') {
            stk.pop();
        }
        else {
            res[index++] = s[i];
        }
        i++;
    }
    return res;
}
int main()
{
    int t;
    cin >> t;
    while(t--) {
        string s;
        cin >> s ;
        s = test_case(s);
        s2 = test_case(s2);
        for(int i=0;i<index;i++) {
            cout << res[i];
        }
        cout << endl;
    }

    return 0;
}
