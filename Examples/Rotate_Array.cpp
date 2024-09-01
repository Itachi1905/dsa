#include<iostream>
#include<vector>
using namespace std;

vector<int> rotate_arr(vector<int> v,int n,int k) {
    // Cyclic way me k positions shift kr denge
    vector<int> temp(n,0);
    for (int i = 0; i < n; i++) {
        temp[(i+k)%n]=v[i];
    }
    return temp;
}
void print(vector <int> v,int n) {
    for (int i = 0; i < n; i++) {
        cout<<v[i]<<" ";
    } cout<<endl;
}
int main() {
    int n,k;
    cin>>n>>k;
    vector<int> v(n,0);
    for (int i = 0; i < n; i++) {
        cin>>v[i];
    }
    vector<int> ans = rotate_arr(v,n,k);
    print(ans,n);
    return 0;
}