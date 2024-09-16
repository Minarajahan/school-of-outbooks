#include <iostream>
#include <cmath>

bool isPerfectSquare(long long n) {
    if (n < 1) return false; 
    
    long long root = static_cast<long long>(sqrt(n));
    return (root * root == n);
}

int main() {
    int T;
    std::cin >> T;
    
    while (T--) {
        long long n;
        std::cin >> n;
        
        if (isPerfectSquare(n)) {
            std::cout << "YES" << std::endl;
        } else {
            std::cout << "NO" << std::endl;
        }
    }
    
    return 0;
}
