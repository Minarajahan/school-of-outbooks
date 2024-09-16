#include <iostream>

int main() {
    int L;
    while (std::cin >> L) {
        int W = (3 * L) / 5;
        int R = L / 5;
        std::cout << W << " " << R << std::endl;
    }
    return 0;
}
