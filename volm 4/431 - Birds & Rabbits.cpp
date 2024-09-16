#include <iostream>

int main() {
    int M, N;
    while (std::cin >> M >> N) {
     
        int R = (N - 2 * M) / 2;
       
        int B = M - R;
      
        std::cout << B << " " << R << std::endl;
    }
    return 0;
}
