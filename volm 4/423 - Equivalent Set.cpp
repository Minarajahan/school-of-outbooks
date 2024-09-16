// compilation error

#include <iostream>
#include <set>

int main() {
    int A1, A2, A3, B1, B2, B3;
    while (std::cin >> A1 >> A2 >> A3 >> B1 >> B2 >> B3) {
        std::set<int> setA = {A1, A2, A3};
        std::set<int> setB = {B1, B2, B3};

        if (setA == setB) {
            std::cout << "A = B" << std::endl;
        } else {
            std::cout << "A != B" << std::endl;
        }
    }
    return 0;
}
