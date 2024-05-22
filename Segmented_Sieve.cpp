#include<bits/stdc++.h>
using namespace std;
int numP(int n) {
    vector<int> v(n,1);
    int count = 0;
    for (int i = 2; i <= n; i++) {
        int x = i*i ;
        while( x <= n ) {
            v[x-1] = 0;
            // cout<<v[x-1]<<" ";
            x = x + i;
        }
    }
    for (int i = 1; i < n; i++) {
        if( v[i] == 1 ) count++;
        // cout<<v[i]<<" ";
    }
    return count;
}
int main() {
    int x=50;
    // cin >> x;
    cout<<numP(x);
}