#include <iostream>

int main() {
    long long n;
    while (std::cin >> n) {
       
        long long triangularNumber = n * (n + 1) / 2;
        
      
        std::cout << triangularNumber << std::endl;
    }
    return 0;
}
