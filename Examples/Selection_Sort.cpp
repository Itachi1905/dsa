#include<bits/stdc++.h>
using namespace std;
void selectionSort(vector <int> arr,int n) {
    for (int i = 0; i < n-1; i++) {
        int minIndex=i;
        for (int j = i+1; j < n; j++) {
            if (arr[minIndex]>arr[j]) minIndex=j;
        }
        swap(arr[minIndex],arr[i]);
    } 
}
void solve() {
    int n;
    cin>>n;
    vector <int> v(n,0);
    for (int i = 0; i < n; i++) {
        cin>>v[i];
    }
    selectionSort(v,n);
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