#include <iostream>

bool isValidTriangle(int A, int B, int C) {
    return (A > 0 && B > 0 && C > 0) && (A + B + C == 180);
}

int main() {
    int A, B, C;
    while (std::cin >> A >> B >> C) {
        if (isValidTriangle(A, B, C)) {
            std::cout << "YES" << std::endl;
        } else {
            std::cout << "NO" << std::endl;
        }
    }
    return 0;
}
