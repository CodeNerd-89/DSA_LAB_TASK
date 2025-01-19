//Author:Tahmid Hossain
#include<bits/stdc++.h>
using namespace std;

int32_t main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    string s;
    cin >> s;
    string s_1;
    for(int i = 0; i < s.size(); i++){
        if(s[i] >= 'a' && s[i] <= 'z'){
            continue;
        }
        else if(s[i] >= 'A' && s[i] <= 'Z'){
            continue;
        }
        else{
            s_1.push_back(s[i]);          
        }
    }
    cout << s_1 << "\n";
    return 0;
}