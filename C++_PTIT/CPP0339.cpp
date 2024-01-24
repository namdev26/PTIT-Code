#include <bits/stdc++.h>
using namespace std;
int main (){
    int t; cin >> t;
    cin.ignore();
    while(t--){
        string s;
        cin >> s;
        int n = s.size();
        int ans =0;
        map <char , int > mp;
        for (char x : s){
            mp[x]++;
        }
        for (auto it : mp){
            ans= ans + it.second * (it.second-1)/2;
        }
        cout << n + ans << endl;
    }
}
//abcab