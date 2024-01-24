#include <bits/stdc++.h>
using namespace std;
int check(char c[])
{
    int n = strlen(c);
    int tmp = 1, sum = 0;
    for (int i = n - 1; i >= 0; i--){
        sum = sum + (c[i] - '0') * tmp;
        tmp = tmp * 2;
        tmp = tmp % 10;
        sum = sum % 10;
    }
    if ( sum % 5 == 0) return 1;
    else return 0;
}

int main (){
    int t; cin >> t;
    while (t--){
        char c[10005];
        cin >> c;
        if(check(c)) cout << "Yes" << endl;
        else cout << "No" << endl;
    }
}