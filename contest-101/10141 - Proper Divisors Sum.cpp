#include <iostream>
#include <cmath>
using namespace std;


long long sumOfProperDivisors(long long n) {
    if (n < 2) return 0; 
    long long sum = 1; 
    long long sqrtN = sqrt(n);
    
   
    for (long long i = 2; i <= sqrtN; ++i) {
        if (n % i == 0) {
            sum += i;
            if (i != n / i) {
                sum += n / i;
            }
        }
    }
    
    return sum;
}

int main() {
    int T;
    cin >> T;
    
    for (int caseNumber = 1; caseNumber <= T; ++caseNumber) {
        long long N;
        cin >> N;
        long long result = sumOfProperDivisors(N);
        cout << "Case " << caseNumber << ": " << result << endl;
    }
    
    return 0;
}
