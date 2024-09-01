#include<bits/stdc++.h>
using namespace std;
int main() {
    int arr[3][3] = {1,2,3,4,5,6,7,8,9};
    int start_row = 0;
    int end_row = 2;
    int start_col = 0;
    int end_col = 2;
    int count = 2;
    while( count-- ) {
    int k;
    k = arr[0][start_col];
    arr[0][start_col] = arr[start_row][2];
    arr[start_row][2] = arr[2][end_col];
    arr[2][end_col] = arr[end_row][0];
    arr[end_row][0] = k;
        // cout<<arr[0][start_col]<<" ";
        // cout<<arr[start_row][2]<<" ";
        // cout<<arr[2][end_col]<<" ";
        // cout<<arr[end_row][0]<<" ";
        start_col++;
        start_row++;
        end_col--;
        end_row--;
        // cout<<endl;
    }
    cout<<endl;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
        cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    } 
}