#include<bits/stdc++.h>
using namespace std;
int BinarySearch(int arr[],int size) {
    int start=0,end=size-1;
    int mid=end +(start-end)/2;
    while (start<=end) {
        if (arr[mid]<arr[mid+1] && arr[mid-1]>arr[mid]) return mid;
        else if (arr[mid]>=arr[0]) start=mid;
        else end=mid;
        mid=end +(start-end)/2;
    }
    return -1;
}
int main () {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin>>t;
    while (t--) {
        int n,k;
        cin>>n;
        int v[n];
        for (int i = 0; i < n; i++) {
            cin>>v[i];
        }
        k=BinarySearch(v,n);
        cout<<v[k]<<endl;
        // You are given a Sorted Rotated Array
        /* Rotated Array means the array is operated such a way like an arr={1,2,3,7,9} after rotating along 2 becomes arr=(7,9,1,2,3)*/
        // sort(v,v+n);

    }
    return 0;
}