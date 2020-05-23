#include <bits/stdc++.h>

const int n = 200005;
const long long base = 1e9+7;
const long long inf = 1e18+7;
 
using namespace std;
 
struct CongViec{
    int Start;
    int Finish;
};
 
bool cmp(CongViec a,CongViec b){
    return a.Finish<b.Finish;
}
 
void Solve(){
    int n;
    cin >> n;
    CongViec s[n+5];
    int a[n+5],b[n+5];
    for(int i=0;i<n;i++){
        cin >> a[i];
    }
    for(int i=0;i<n;i++){
        cin >> b[i];
        s[i].Start=a[i];
        s[i].Finish=b[i];
    }
    sort(s,s+n,cmp);
    int tmp=0;
    int ans=1;
    for(int i=1;i<n;i++){
        if(s[i].Start>=s[tmp].Finish){
            ans++;
            tmp=i;
        }
    }
    cout << ans<<endl;
}
 
int main(){
    int T=1;
    cin >> T;
    while(T--){
        Solve();
    }
    return 0;
} 
