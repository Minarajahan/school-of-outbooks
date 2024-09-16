#include <iostream>

int main() {
    int S, E;
    while (std::cin >> S >> E) {
        int count = E - S + 1;
        if (count % 2 == 1) {
            
            int middle = (S + E) / 2;
            std::cout << middle << std::endl;
        } else {
           
            int mid1 = (S + E) / 2;
            int mid2 = mid1 + 1;
            std::cout << mid1 << " " << mid2 << std::endl;
        }
    }
    return 0;
}
