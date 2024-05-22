#include<iostream>
#include<vector>
using namespace std;
vector<int> move_zeroes(vector <int> v,int n) {
    int nonZero=0;
    for (int i = 0; i < n; i++) {
        if(v[i]!=0) {
            swap(v[i],v[nonZero]);
            nonZero++;
        }
    }
    return v;
}
void print(vector <int> v,int n) {
    for (int i = 0; i < n; i++) {
        cout<<v[i]<<" ";
    }
}
int main() {
    int n;
    cin>>n;
    vector <int> v(n,0);
    for (int i = 0; i < n; i++) {
        cin>>v[i];
    }
    vector<int> ans= move_zeroes(v,n);
    print(ans,n);
}