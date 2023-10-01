#include <bits/stdc++.h>
using namespace std;
int main (){
    int t; cin >> t;
    string d1 = "101 A B B A D C C A B D C C A B D";
    string d2 = "102 A C C A B C D D B B C D D B B";
    cin.ignore();
    while (t--){
        string s;
        getline(cin,s);
        int socaudung =0; 
        if (s[2] == '1'){
            for (int i =4; i <=32; i = i + 2 ){
                if (s[i] == d1[i]) socaudung ++;
            }
        }
        if (s[2] == '2'){
            for (int i =4; i <=32; i = i + 2 ){
                if (s[i] == d2[i]) socaudung ++;
            }
        }    
        cout << fixed << setprecision(2)<<socaudung * (float)2/3 << endl;    
    }
}