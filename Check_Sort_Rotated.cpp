#include<iostream>
#include<vector>
using namespace std;
bool check(vector <int> v,int n) {
    int k=0,a=0;
    vector<int> temp(n,0);
    for (int i = 0; i < n-1; i++) {
        if(v[i]>v[i+1]) {
        k++;
        }
    }
    if(v[n-1]>v[0]) k++;
    return k<=1;
}
int main() {
    int n;
    cin>>n;
    vector <int> v(n,0);
    for (int i = 0; i < n; i++) {
        cin>>v[i];
    }
    cout<<check(v,n);
}