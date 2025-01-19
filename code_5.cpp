//Author:Tahmid Hossain
#include<bits/stdc++.h>
using namespace std;

int32_t main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    string s;
    cin >> s;
    int freq[26] = {0};
    for (char c : s) {
        freq[c - 'a']++;
    }
    for (int i = 0; i < 26; i++) {
        cout << char('a' + i) << " : " << freq[i] << endl;
    }  
    return 0;
}