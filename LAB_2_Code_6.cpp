//Author:Tahmid Hossain
#include<bits/stdc++.h>
using namespace std;
const int MAX_DAYS = 10000;
int32_t main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        int a[n];
        int days[n];
        int unique_days[MAX_DAYS + 1] = {0};
        int unique_count = 0;
        for (int i = 0; i < n; ++i) {
            cin >> days[i];
            if (unique_days[days[i]] == 0) {
                unique_days[days[i]] = 1;
                unique_count++;
            }
        }
        cout << unique_count << endl;    
    }
    return 0;
}





























// #include <cstdio>

// const int MAX_DAYS = 10000; // Assuming the maximum possible day value

// int main() {
//     int T;
//     scanf("%d", &T);
    
//     while (T--) {
//         int n;
//         scanf("%d", &n);
//         int days[n];
//         int unique_days[MAX_DAYS + 1] = {0}; // Array to track unique days
//         int unique_count = 0;
        
//         for (int i = 0; i < n; ++i) {
//             scanf("%d", &days[i]);
//             if (unique_days[days[i]] == 0) {
//                 unique_days[days[i]] = 1;
//                 unique_count++;
//             }
//         }
        
//         printf("%d\n", unique_count);
//     }
    
//     return 0;
// }
