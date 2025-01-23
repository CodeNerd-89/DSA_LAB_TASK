//Author:Tahmid Hossain
#include<bits/stdc++.h>
using namespace std;

int32_t main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    // check a matrix is transpose or not
    int row, col; cin >> row >> col;
    int arr[row][col];
    for(int i = 0; i < row; i++) {
        for(int j = 0; j < col; j++) {
            cin >> arr[i][j];
        }
    }
    int arr2[col][row];
    for(int i = 0; i < row; i++) {
        for(int j = 0; j < col; j++) {
            arr2[j][i] = arr[i][j];
        }
    }
    bool flag = true;
    for(int i = 0; i < row; i++) {
        for(int j = 0; j < col; j++) {
            if(arr[i][j] != arr2[i][j]) {
                flag = false;
                break;
            }
        }
        if(!flag) break;
    }
    if(flag) {
        cout << "The matrix is a transpose of itself";
    }
    else {
        cout << "The matrix is not a transpose of itself";
    }
    return 0;
}