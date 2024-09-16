#include <iostream>

int main() {
    int T;
    std::cin >> T;
    
    for (int i = 1; i <= T; ++i) {
        long long N;
        std::cin >> N;
        
      
        long long matches = N - 1;
        
      
        std::cout << "Case " << i << ": " << matches << std::endl;
    }
    
    return 0;
}
