#include <iostream>
#include <cmath>
using namespace std;
bool isPerfectSquare(long long x) {
    long long sqrtX = sqrt(x);
    return (sqrtX * sqrtX == x);
}

bool isFibonacciNumber(long long n) {
    return isPerfectSquare(5 * n * n + 4) || isPerfectSquare(5 * n * n - 4);
}

int main() {
    int T;cin >> T;
    while (T--){
        long long n;cin >> n;
        if (isFibonacciNumber(n)) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    return 0;
}
