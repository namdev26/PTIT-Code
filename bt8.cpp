#include <bits/stdc++.h>
using namespace std;

long long sum(long long n) {
    long long tong = 0;
    for (int i = 1; i <= sqrt(n); i++) {
        if (n % i == 0) {
            tong += i;
            if (i != n / i) {
                tong += n / i;
            }
        }
    }
    return tong;
}

int main() {
    int t; cin >> t;
    while ( t--){
        long long n; cin >> n;
        cout << sum(n) << endl;
    }
    return 0;
}