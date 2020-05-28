#include <bits/stdc++.h>
using namespace std;
string res[1024];
int m=0;
void gen(int A[], int n) {
    --A[0];
    for (int i = 0; i < n; ++i) {
        if (A[i] <0) {
            --A[i +1];
            A[i] += 2;
        }
    }
}
pair <int, int > pai[10];
void luuTru(int a[],int n,string s) {
    for(int i= 0;i<s.size();i++) {
        if(s[i]=='('){
            for(int j=0;j<n;++j){
                if(i==pai[j].first&&a[j]==1)
                    res[m]+=s[i];
            }
        }
        else if(s[i]==')'){
            for(int j=0;j<n;++j){
                if(i==pai[j].second&&a[j]==1)
                    res[m]+=s[i];
            }
        }
        else res[m]+=s[i];
    }
    m++;
}
int main() {
    int t;
    cin >> t;
    while(t--) {
        string s;
        cin >> s;
        stack <int> stk;
        int j=0;
        for(int i = 0 ;i<s.size();i++) {
            if(s[i] == '(') {
                stk.push(i);
            }
            else if(s[i] == ')') {
                pai[j].first=stk.top();
                pai[j].second = i;
                j++;
                stk.pop();
            }
        }
        int A[j];
        for(int i=0;i<j;++i) A[i]=1;
        for(int i= 0;i< (pow(2,j)-1);i++) {
            gen(A,j);
            luuTru(A,j,s);
        }
        sort(res,res+m);
        for(int i=0;i<m;++i) {
            if(res[i]!=res[i+1]&&i!=m-1)
                cout << res[i] <<endl;
        }
        if(res[m-1]!=res[m-2])
                cout << res[m-1] << endl;
    }
}
