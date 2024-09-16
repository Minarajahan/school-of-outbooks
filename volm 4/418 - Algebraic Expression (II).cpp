#include <iostream>
#include <cmath>

int main() {
    int X, Y;
    while (std::cin >> X >> Y) {
     
        double result = std::sqrt(X * X + 4.0 * Y);
        std::cout << static_cast<int>(result) << std::endl;
    }
    return 0;
}
