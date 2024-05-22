#include<bits/stdc++.h>
using namespace std;
#define ll long long
void solve() {
    string str;
    cin >> str;
    char ch = str[0];
    int x = 1;
    for (int i = 1; i < str.size(); i++) {
        if( ch == str[i] ) x++;
        else{
            if(x>1) cout << ch << x ;
            else cout << ch;
            ch = str[i];
            x = 1;
        }
        if( i == str.size() - 1) {
            if(x>1) cout << ch << x ;
            else cout << ch;
        }
    }
    cout << endl;
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
