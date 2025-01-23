//Author:Tahmid Hossain
#include<bits/stdc++.h>
using namespace std;

int32_t main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        vector<int> a(n);
        for(int i = 0; i < n; i++){
            cin >> a[i];
        }
        bool is_non_decreasing = true;
        for (int i = 1; i < n; ++i) {
            if (a[i] < a[i - 1]) {
                is_non_decreasing = false;
                break;
            }
        }
        if(is_non_decreasing){
            cout << "Yes" <<"\n";
        }
        else{
            cout << "No" << "\n";
        }
    }

    return 0;
}















// #include <iostream>
// #include <vector>

// using namespace std;

// int main() {
//     int T;
//     cin >> T;  // Number of test cases

//     for (int t = 0; t < T; ++t) {
//         int N;
//         cin >> N;  // Number of problems solved by the students

//         vector<int> difficulties(N);  // Difficulty ratings

//         // Read difficulty ratings
//         for (int i = 0; i < N; ++i) {
//             cin >> difficulties[i];
//         }

//         bool is_non_decreasing = true;  // Flag to check if the order is non-decreasing

//         // Check if the difficulties are in non-decreasing order
//         for (int i = 1; i < N; ++i) {
//             if (difficulties[i] < difficulties[i - 1]) {
//                 is_non_decreasing = false;
//                 break;
//             }
//         }

//         // Output the result for the current test case
//         if (is_non_decreasing) {
//             cout << "Yes" << endl;
//         } else {
//             cout << "No" << endl;
//         }
//     }

//     return 0;
// }
