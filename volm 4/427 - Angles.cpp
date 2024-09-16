#include <iostream>

std::string classifyAngle(int A) {
    if (A < 90) {
        return "ACUTE ANGLE";
    } else if (A == 90) {
        return "RIGHT ANGLE";
    } else {
        return "OBTUSE ANGLE";
    }
}

int main() {
    int A;
    while (std::cin >> A) {
        std::cout << classifyAngle(A) << std::endl;
    }
    return 0;
}
