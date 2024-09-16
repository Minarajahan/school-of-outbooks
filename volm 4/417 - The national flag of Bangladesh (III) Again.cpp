#include <iostream>
#include <iomanip>

int main() {
    int L;
    while (std::cin >> L) {
        int W = (3 * L) / 5;
        int R = L / 5;
        double X = 9.0 * L / 20.0;
        double Y = W / 2.0;

        std::cout << "L = " << L << std::endl;
        std::cout << "W = " << W << std::endl;
        std::cout << "R = " << R << std::endl;
        std::cout << "(X, Y) = (" << std::fixed << std::setprecision(2) << X << ", " << Y << ")" << std::endl;
    }
    return 0;
}
