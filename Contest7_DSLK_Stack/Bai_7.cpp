
#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        stack <char> str;
        for(int i=0;i<s.size();i++){
            if(s[i] == '('||s[i]==')' && str.size() == 0) {
                str.push(s[i]);
            }
            else if(s[i]==')') {
                if(str.size() > 0 && str.top() == '(') str.pop();
                else str.push(s[i]);
            }
        }
        int d1=0,d2=0;
        while(str.size() > 0) {
            if(str.top() == '(') d1++;
            else d2++;
            str.pop();
        }
        int res = d1/2+d2/2+d1%2+d2%2;
        cout<<res <<endl;

    }
}
