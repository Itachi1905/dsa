#include<bits/stdc++.h>
using namespace std;
void bubbleSort(vector <int> arr,int n) {
    bool swapped=false;
    for (int i = 1; i < n; i++) {
        for (int j = 0; j < n-i; i++) {
            if (arr[j]>arr[j+1]) {
            swap(arr[j],arr[j+1]);
            swapped=true;
            }
        }
        if(swapped) break;
    }
}
void solve() {
    int n;
    cin>>n;
    vector <int> v(n,0);
    for (int i = 0; i < n; i++) {
        cin>>v[i];
    }
    bubbleSort(v,n);
}
int main () {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin>>t;
    while (t--) {
        solve();
    }
    return 0;
}