//Author:Tahmid Hossain
#include<bits/stdc++.h>
using namespace std;

int32_t main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int row, col; cin >> row >> col;
    int arr[row][col];
    for(int i = 0;i < row; i++){
        for(int j = 0;j < col; j++){
            cin >> arr[i][j];
        }
    }
    for(int i = 0; i < row; i++){
        for(int j = 0; j < col; j++){
            if(i == j && arr[i][j] != 1) return 0;
            if(i != j && arr[i][j] != 0) return 0;
            
        }
    }
    cout << "Identity Matrix";
    return 0;
}