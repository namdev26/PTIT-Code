#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin >> s;
    int t = s.size();
    if (t < 2){
       if( stoi(s) % 4 == 0) cout << "chia het cho 4";
    }
    if ( t > 2){
        if(stoi(s.substr(t-2)) % 4 ==0) cout << "chia het cho 4";
    }
}