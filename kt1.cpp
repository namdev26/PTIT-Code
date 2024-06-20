#include <bits/stdc++.h>
using namespace std;
int main(){
    int t; cin >> t;
    while (t--){
        float n; cin >>n;
        if (n>=0.0 && n<=4.0) cout << "-1"<< endl;
        else if (n== 4.5) cout << "7"<< endl;
        else if (n== 5.0) cout << "8"<< endl;
        else if (n== 5.5) cout << "9"<< endl;
        else if (n== 6.0) cout << "10"<< endl;
        else if (n== 6.5) cout << "10"<< endl;
        else if (n== 7.0) cout << "10"<< endl;
        else if (n== 7.5) cout << "10"<< endl;
        else if (n>=8.0 && n<=9.0) cout << "10"<< endl;
    }
}