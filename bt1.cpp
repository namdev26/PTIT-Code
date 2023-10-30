#include <bits/stdc++.h>
using namespace std;
int sumOfDigits(int num) {
    int sum = 0;
    while (num > 0) {
        sum += num % 10;
        num /= 10;
    }
    return sum;
}

int sumOfFactors(int num) {
    int sum = 0;
    for (int i = 2; i <= num; i++) {
        while (num % i == 0) {
            sum += sumOfDigits(i);
            num /= i;
        }
    }
    return sum;
}

bool isSmithNumber(int num) {
    int digitSum = sumOfDigits(num);
    int factorSum = sumOfFactors(num);
    return digitSum == factorSum;
}

int main() {
    int n;
    cin >> n;

    if (isSmithNumber(n)) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}