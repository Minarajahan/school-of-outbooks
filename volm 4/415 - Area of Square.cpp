#include <iostream>

int main() {
    int a;
    while (std::cin >> a) {
        int area = a * a;
        std::cout << area << std::endl;
    }
    return 0;
}
