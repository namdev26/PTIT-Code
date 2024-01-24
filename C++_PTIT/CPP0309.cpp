#include <bits/stdc++.h>
using namespace std;
int main (){
    int t; cin >> t;
    cin.ignore();
    while (t--){
        string s;
        int cnt =1;
        getline(cin,s);
        for (int i =0; i < s.size(); i++){
            if(s[i] == ' ' || s[i] == '\n' || s[i] == '\t') cnt ++;
        }
        cout << cnt << endl;
    }
}