#include <iostream>
#include <map>
using namespace std;

int main() {
    map<unsigned long long, int> fib_map;
    unsigned long long a = 0, b = 1, c;
    fib_map[a] = 0;
    fib_map[b] = 1;
    
    for (int i = 2; ; ++i) {
        c = a + b;
        if (c > 12586269025ULL) break;
        fib_map[c] = i;
        a = b;
        b = c;
    }

    unsigned long long n;
    while (cin >> n && n != 0) {
        if (fib_map.find(n) != fib_map.end()) {
            cout << "The position of Fibonacci number (" << n << ") is " << fib_map[n] << "." << endl;
        }
    }

    return 0;
}
