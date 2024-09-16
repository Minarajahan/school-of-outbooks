#include <iostream>

int main() {
    int M;
    while (std::cin >> M) {
        if (M >= 33) {
            std::cout << "Pass" << std::endl;
        } else {
            std::cout << "Fail" << std::endl;
        }
    }
    return 0;
}
