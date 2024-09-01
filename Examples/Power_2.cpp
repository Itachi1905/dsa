#include<bits/stdc++.h>
using namespace std;

void solve() {
    int n, k = 0;
    cin >> n;
    while (n) {
        if (n & 1) k++;
        n = n >> 1;
    }
    if (k == 1) 
        cout << "YES" << endl;
    else 
        cout << "NO" << endl;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
