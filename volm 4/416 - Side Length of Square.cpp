#include <iostream>
#include <cmath>

int main() {
    int A;
    while (std::cin >> A) {
        int sideLength = static_cast<int>(std::sqrt(A));
        std::cout << sideLength << std::endl;
    }
    return 0;
}
