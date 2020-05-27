#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        string s1, s2;
        cin >> s1 >> s2;
        if(sosanh(s1,s2)) cout << "Yes" << endl;
        else cout << "No" << endl;
    }
}
