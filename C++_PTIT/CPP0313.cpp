#include <bits/stdc++.h>
using namespace std;
int main(){
        string s;
        getline(cin,s);
        string loai;
        getline(cin,loai);
        stringstream ss(s);
        string token ;
        while(ss >> token){
            if (token != loai) cout << token << " ";
    }
}