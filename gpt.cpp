#include <iostream>

using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        long long n;
        cin >> n;

        long long sumOfDivisors = 0;

        for (int i = 1; i <= n / 2; i++) {
            if (n % i == 0) {
                sumOfDivisors += i;
            }
        }

        if (sumOfDivisors == n) {
            cout << "1" << endl;
        } else {
            cout << "0" << endl;
        }
    }

    return 0;
}
