#include<bits/stdc++.h>
using namespace std;
#define ll long long
void solve() {
    string s;
    cin>>s;
    for(int j=0; j<s.size() ;j++) {
    for (int i = 0; i < s.size() - 1 ; i++) {
        if ( s[i] == s[i+1] ) {
            s.erase(s.begin() + i+1);
            s.erase(s.begin() + i);
        }
    }
    }
    cout<<s<<endl;
}
int main() {
    ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
    int testcase;
    cin>>testcase;
    while (testcase--) {
        solve();
    }
    return 0;
}