#include<bits/stdc++.h>
#include<vector>
using namespace std;
int requiredHeight(vector <int> arr,int n,int m) {
    int sum=0,max=0;
    for (int i = 0; i < n; i++) {
        if(max<arr[i]) max=arr[i];
    }
    int start=0,end=max;
    int mid=start+(end-start)/2;
    int ans=-1;
    while (start<=end) {
        sum=0;
        for (int i = 0; i < n; i++) {
            if(arr[i]>mid) sum=sum+arr[i]-mid;
        }
        if(sum==m) return mid;
        if(sum<m) end=mid-1;
        if(sum>m) start=mid+1;
        mid=start+(end-start)/2;
    }
    return -1;
}
int main() {
    int n,m;
    cin>>n>>m;
    vector <int> v(n,0);
    for (int i = 0; i < n; i++) {
        cin>>v[i];
    }
    cout<<requiredHeight(v,n,m)<<endl;
    return 0;
}