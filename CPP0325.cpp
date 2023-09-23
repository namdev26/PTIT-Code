#include <bits/stdc++.h>
using namespace std;
int main (){
    int t; cin >> t;
    cin.ignore();
    while (t--){
        string s;
        getline(cin,s);
        int tongle =0;
        int tongchan=0;
        int tongso=0;
        for (int i =0; i < s.size(); i = i+2){
            tongle = tongle + (s[i]-'0');
        }
        for (int i =1; i < s.size(); i = i+2){
            tongchan = tongchan + (s[i]-'0');
        }
        tongso = tongle - tongchan;
        if(tongso % 11 ==0) cout << "1" << endl;
        else cout << "0" << endl;
    }
}