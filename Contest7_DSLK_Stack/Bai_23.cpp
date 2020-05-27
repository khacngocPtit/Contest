#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    cin.ignore();
    while(t--) {
        string s;
        cin >> s;
        vector<char>str;
        for(int i=0;i<s.size();i++){
            if((int)s[i] == 49) {
                int sum = 0;
                sum = sum*10 + s[i] -'0';
                str.push_back(sum);
            }
            else {
                str.push_back(s[i]);
            }
        }
        cout << endl;
        for(int i=0;i<str.size();i++){
            cout << str[i] << " ";
        }
        for(int i=0 ;i<str.size();i++) {
            if()
        }
    }
}
