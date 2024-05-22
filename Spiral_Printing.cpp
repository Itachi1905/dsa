#include<bits/stdc++.h>
using namespace std;
int main() {
    int arr[4][4] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16};
    int row = 4 , col = 4;
    int start_row = 0,end_row = 3,start_col = 0 ,end_col = 3;
    int count = 0;
    while ( count <= 16 ) {
        for (int i = start_col; i <= end_col && count <= 16; i++) {
            cout<<arr[start_row][i]<<" ";
            count++;
        }
        start_row++;
        for (int i = start_row; i <= end_row && count <= 16; i++) {
            cout<<arr[i][end_col]<<" ";
            count++;
        }
        end_col--;
        for (int i = end_col; i >= start_col && count <= 16; i--) {
            cout<<arr[end_row][i]<<" ";
            count++;
        }
        end_row--;
        for (int i = end_row; i >= start_row && count <= 16; i--) {
            cout<<arr[i][start_col]<<" ";
            count++;
        }
        start_col++;
    }
    
    
    // for (int i = 0; i < 3; i++) {
    //     for (int j = 0; j < 3; j++) {
    //     cout<<arr[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }
}