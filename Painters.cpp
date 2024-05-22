#include<bits/stdc++.h>
#include<vector>
using namespace std;

bool isPossible(vector <int> arr,int n,int mid,int p) {
    int painterCount=1;
    int boardSum=0;
    for (int i = 0; i < n; i++) {
        if(boardSum+arr[i]<=mid) boardSum=boardSum+arr[i];
        else {
            painterCount++;
            if(painterCount>p || arr[i]>mid) return false;
            boardSum=arr[i];
        }
        if (painterCount>p) return false;
    }
    return true;
}
int BinarySearch(vector <int> arr,int n,int p) {
    int s=0,e;
    int mid=s+(e-s)/2;
    int ans=-1;
    int sum=arr[0];
    for (int i = 1; i < n; i++) {
        sum=sum+arr[i];
    }
    e=sum;
    while (s<=e) {
        if(isPossible(arr,n,mid,p)) {
            ans=mid;
            e=mid-1;
        }
        else s=mid+1;
        mid=s+(e-s)/2;
    }
    return ans;
}
int main () {
        int n,k;
        cin>>n>>k;
        vector <int> v(n,0);
        for (int i = 0; i < n; i++) {
            cin>>v[i];
        }
        cout<<BinarySearch(v,n,k)<<endl;
    return 0;
}