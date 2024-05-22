#include<iostream>
#include<vector>
using namespace std;

vector<int> reverse(vector<int> v,int m) {
    int s=m+1,e=v.size()-1;
    while (s<=e) {
        swap(v[s],v[e]);
        s++;
        e--;
    }
    return v;
}
void print_vector(vector<int> v) {
    for(int i=0;i<v.size();i++) cout<<v[i]<<" ";
    cout<<endl;
}
int main () {
    int n,m;
    cin>>n>>m;
    vector <int> v(n,0);
    for (int i = 0; i < n; i++) {
        cin>>v[i];
    }
    vector<int> ans = reverse(v,m);
    print_vector(ans);
} 