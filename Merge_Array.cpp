#include<iostream>
#include<vector>
using namespace std;
vector <int> merge(vector<int> a,vector<int> b,int n,int m) {
    vector<int> x(n+m,0);
    int i=0,j=0,k=0;
    while (i < n && j < m) {
        if(a[i]<b[j]) x[k++]=a[i++];
        else x[k++]=b[j++];
    }
    while (i<n) {
        x[k++]=a[i++];
    }
    while (j<m) {
        x[k++]=b[j++];
    }
    
    
    return x;
}
void print_vector(vector<int> v) {
    for(int i=0;i<v.size();i++) cout<<v[i]<<" ";
    cout<<endl;
}
int main() {
    int n,m;
    cin>>n>>m;
    vector <int> a(n,0);
    for (int i = 0; i < n; i++) {
        cin>>a[i];
    }
    vector <int> b(m,0);
    for (int i = 0; i < m; i++) {
        cin>>b[i];
    }
    vector <int> ans = merge(a,b,n,m);
    print_vector(ans);
}