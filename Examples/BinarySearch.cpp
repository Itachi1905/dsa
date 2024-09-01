#include<bits/stdc++.h>
using namespace std;
int BinarySearch(int arr[],int size,int key) {
    int start=0,end=size-1;
    int mid=end +(start-end)/2;
    while (start<=end) {
        if (arr[mid]==key) return mid;
        else if (arr[mid]<key) start=mid+1;
        else end=mid-1;
        mid=end +(start-end)/2;
    }
    return -1;
}
// the Range in which answer lies is called Search Space
/* NOTE : Binary Search can only be applied when the given sequence is Monotonic.*/
int main () {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin>>t;
    while (t--) {
        int n,k;
        cin>>n>>k;
        int v[n];
        for (int i = 0; i < n; i++) {
            cin>>v[i];
        }
        sort(v,v+n);
        int Index=BinarySearch(v,n,k);
        cout<<Index;
    }
    return 0;
}