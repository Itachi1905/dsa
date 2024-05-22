#include<bits/stdc++.h>
using namespace std;
void insertionSort(vector <int> arr,int n) {
    for(int i = 1; i<n; i++) {
        int temp = arr[i];
        int j = i-1;
        for(; j>=0; j--) {
            
            if(arr[j] > temp) {
                //shift
                arr[j+1] = arr[j];
            }
            else { // ruk jao 
                break;
            }
        }
        arr[j+1] = temp;  
    } 
}
void solve() {
    int n;
    cin>>n;
    vector <int> v(n,0);
    for (int i = 0; i < n; i++) {
        cin>>v[i];
    }
    insertionSort(v,n);
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