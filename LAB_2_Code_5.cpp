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













