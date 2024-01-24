#include <bits/stdc++.h>
using namespace std;
bool checkthuannghich(char c[]){
    int r = strlen(c)-1;
    int l =0;
    while (r > l){
        if ( c[l] != c[r]) return false;
        r--;
        l++;
    }
    return true;
}
bool checktoanchan(char c[]){
    for ( int i = 0; i <=strlen(c); i++){
        if(c[i]  % 2 !=0) return false;
    }
    return true;
}
int main(){
    int t; cin >> t;
    while (t--){
    char c[1005];
    cin >> c;
    if(checktoanchan(c) && checkthuannghich(c)) cout << "YES" << endl;
    else cout << "NO"<< endl;
    }
}