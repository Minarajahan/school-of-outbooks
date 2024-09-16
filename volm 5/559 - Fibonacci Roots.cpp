#include <iostream>
using namespace std;

int main() {
    unsigned long long n;
    
    
    unsigned long long fib1 = 0, fib2 = 1;
    
    while (cin >> n) {
        fib1 = 0, fib2 = 1;
        
        while (fib1 + fib2 < n) {
            unsigned long long temp = fib1 + fib2;
            fib1 = fib2;
            fib2 = temp;
        }

        cout << fib1 << " " << fib2 << endl;
    }
    
    return 0;
}
