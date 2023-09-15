#include <iostream>
using namespace std;
int sumOfDigits(int n) {
    int sum = 0;
    while (n > 0) {
        sum += n % 10; 
        n /= 10; 
    }
    return sum;
}


int sumOfPrimeFactors(int n) {
    int sum = 0;
    int factor = 2;

    while (n > 1) {
        if (n % factor == 0) {
            sum += sumOfDigits(factor); 
            n /= factor; 
        } else {
            factor++; 
        }
    }

    return sum;
}


bool isSmithNumber(int n) {
    if (n < 4) return false; 

    int digitSum = sumOfDigits(n);
    int factorSum = sumOfPrimeFactors(n);

    return (digitSum == factorSum);
}

int main() {
	int n; cin >> n;
    if (isSmithNumber(n)) {
    cout << "YES" << endl;
    } else {
    cout << "NO" << endl;
    }
    return 0;
}
