#include <iostream>

int main() {
    int X, B, M, Y;
    while (std::cin >> X >> B >> M >> Y) {
        int passedAtLeastOne = B + M - Y;
        int failedBoth = X - passedAtLeastOne;
        std::cout << failedBoth << std::endl;
    }
    return 0;
}
