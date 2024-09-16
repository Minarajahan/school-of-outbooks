#include <iostream>
#include <cmath>
using namespace std;

bool isPrime(unsigned long long n) {
    if (n <= 1) return false;
    if (n == 2 || n == 3) return true;
    if (n % 2 == 0 || n % 3 == 0) return false;
    for (unsigned long long i = 5; i * i <= n; i += 6) {
        if (n % i == 0 || n % (i + 2) == 0) return false;
    }
    return true;
}

int main() {
    unsigned long long n;
    while (cin >> n) {
        if (isPrime(n)) {
            cout << "prime number" << endl;
        } else {
            cout << "composite number" << endl;
        }
    }
    return 0;
}
