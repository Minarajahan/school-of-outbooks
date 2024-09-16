#include <iostream>

int main() {
    int X, Y;
    while (std::cin >> X >> Y) {
        int result = (X * X - Y) / 2;
        std::cout << result << std::endl;
    }
    return 0;
}
