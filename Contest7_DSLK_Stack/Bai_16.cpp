#include <bits/stdc++.h>
using namespace std;
int tinh(int a,int b, char c){
    if(c == '*'){
        return b*a;
    }
    else if(c =='+'){
        return a+b;
    }
    else if(c == '-'){
        return b-a;
    }
    else if (c == '/'){
        return b/a;
    }
}
int giatrihauto(string s){
    int n = s.size(),i;
    stack<int>stk;
    for(i = 0;i<n;i++){
        if(s[i]!='+'&&s[i]!='-'&&s[i]!='*'&&s[i]!='/'){
            int sm = s[i]  -  48;
            stk.push(sm);
        }
        else {
            int x1 = stk.top();
            stk.pop();
            int x2 = stk.top();
            stk.pop();
            int tmp = tinh(x1,x2,s[i]);
           // cout << tmp << endl;
            stk.push(tmp);
        }
    }
    return stk.top();
}
int main() {
    int t;
    cin >> t;
    cin.ignore();
     while(t--){
        string s;
        cin >> s;
        cout << giatrihauto(s) << endl;
     }
}
