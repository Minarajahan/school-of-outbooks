#include <iostream>

int main() {
    int X, Y;
    while (std::cin >> X >> Y) {
        int result = 2 * (X * X - Y);
        std::cout << result << std::endl;
    }
    return 0;
}
