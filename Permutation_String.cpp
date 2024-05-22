#include<bits/stdc++.h>
using namespace std;
#define ll long long
bool is_equal( int count1[], int count2[]) {
    for (int i = 0; i < 26; i++) {
        if( count1[i] != count2[i] ) return false;
    }
    return true;
}
void solve() {
    string s1;
    cin>>s1;
    string s2;
    cin>>s2;
    int k = 0;
    int window_size = s1.size() ;
    // cout << window_size;
    int arr1[26] = {0};
    int arr2[26] = {0};
    if( s1.size() > s2.size() ) {
    cout<<"NO"<<endl;
    break;
    }
    for (int i = 0; i < window_size; i++) {
        arr1[(s1[i] - 'a')]++;
    }
    for (int i = 0; i < window_size; i++) {
        arr2[(s2[i] - 'a')]++;
    }
    if( is_equal(arr1,arr2) ) k++;
    for (int i = window_size; i < s2.size(); i++) {
        arr2[(s2[ i - window_size] - 'a')]--;
        arr2[(s2[i] - 'a')]++;
        if( is_equal(arr1,arr2) ) {
        k++;
        break;
        }
    }
    if(k) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
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
