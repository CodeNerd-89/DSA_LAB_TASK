//Author:Tahmid Hossain
#include<bits/stdc++.h>
using namespace std;

int32_t main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t; cin >> t;
    while(t--){
        int n, x; cin >> n >> x;
        vector<int> a(n);
        vector<int> b(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        for(int i = 0; i < n; i++){
            cin >> b[i];
        }
        int total_cost = 0;
        for(int i = 0; i < n; i++){
            if(a[i] >= x){
                total_cost += b[i];
            }
        }
        cout << total_cost << "\n";
    }
    return 0;
}














