//Author:Tahmid Hossain
#include<bits/stdc++.h>
using namespace std;

int32_t main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    string s;
    getline(cin, s);
    int count = 1;
    for(int i = 0; i < s.size(); i++){
        if(s[i] == ' '){
            count++;
        }  
    }
    cout << count << "\n";
    return 0;
}