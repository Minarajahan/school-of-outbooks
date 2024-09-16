// compilation error

#include <iostream>
#include <algorithm>

int main() {
    int A, B, C, D;
    while (std::cin >> A >> B >> C >> D) {
        int sum1 = A + B;
        int sum2 = A + C;
        int sum3 = A + D;
        int sum4 = B + C;
        int sum5 = B + D;
        int sum6 = C + D;
        int maxSum = std::max({sum1, sum2, sum3, sum4, sum5, sum6});
        std::cout << maxSum << std::endl;
    }
    return 0;
}
