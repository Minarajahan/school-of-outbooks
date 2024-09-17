#include <iostream>
#include <cmath>
using namespace std;

// Function to count occurrences of prime `m` in N!
long long countPrimeInFactorial(long long n, int m) {
    long long count = 0;
    long long power = m;
    
    while (power <= n) {
        count += n / power;
        if (power > n / m) break; 
        power *= m;
    }
    
    return count;
}

int main() {
    long long N;
    int M;
    
    while (cin >> N >> M) {
        if (N < 1 || M <= 1) {
            cout << "NULL" << endl;
            continue;
        }
        
       
        long long result = countPrimeInFactorial(N, M);
        
        if (result > 0) {
            cout << result << endl;
        } else {
            cout << "NULL" << endl;
        }
    }
    
    return 0;
}
