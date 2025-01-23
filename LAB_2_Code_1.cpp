//Author:Tahmid Hossain
// #include<bits/stdc++.h>
// using namespace std;

// int32_t main() {
//     ios_base::sync_with_stdio(0);
//     cin.tie(0);
//     int n; cin >> n;
//     int arr[n];
//     for(int i = 0; i < n; i++){
//         cin >> arr[i];
//     }
//     int unique_arr[n];
//     int j = 0;
//     for(int i = 0; i < n; i++){
//         bool is_duplicate = false;
//         for(int k = 0; k < j; k++){
//             if(arr[i] == unique_arr[k]){
//                 is_duplicate = true;
//                 break;
//             }
//         }
//         if(!is_duplicate){
//             unique_arr[j] = arr[i];
//             j++;
//         }
//     }
//     cout << "Number of unique elements in the array: " << j << endl;
//     for(int i = 0; i < j; i++){
//         cout << unique_arr[i] << " ";
//     }
//     cout << endl;
//     return 0;
// }
//Author:Tahmid Hossain
#include<bits/stdc++.h>
using namespace std;

int32_t main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n; cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    sort(arr, arr + n);
    vector<int> b(n);
    for(int i = 0; i < n; i++){
        if(arr[i] == arr[i + 1]){
            continue;
        }
        else{
            b.push_back(arr[i]);
        }
    }
    for(int i = 0; i < n; i++){
        cout << b[i];
    }
    return 0;
}
