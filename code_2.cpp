//Author:Tahmid Hossain
#include<bits/stdc++.h>
using namespace std;

int32_t main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    string first;
    cin >> first;
    string second;
    cin >> second;
    int pos = first.find(second);
    cout << pos << "\n";
    return 0;
}