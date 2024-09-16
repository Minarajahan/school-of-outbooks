#include <iostream>

int main() {
    long long N; 
    while (std::cin >> N) {
        if (N % 2 == 1) {
           
            long long middle = (N + 1) / 2;
            std::cout << middle << std::endl;
        } else {
          
            long long mid1 = N / 2;
            long long mid2 = mid1 + 1;
            std::cout << mid1 << " " << mid2 << std::endl;
        }
    }
    return 0;
}
