// Gave compilation error
#include <iostream>
#include <string>
using namespace std;

int main() {
    string line;
    
    while (getline(cin, line)) {
        int even_count = 0;
        int odd_count = 0;
        
        for (char c : line) {
            if (c >= '0' && c <= '9') {
                int digit = c - '0';
                if (digit % 2 == 0) {
                    even_count++;
                } else {
                    odd_count++;
                }
            }
        }
        
        cout << "There are " << even_count << " Even digits & " << odd_count << " Odd digits" << endl;
    }
    
    return 0;
}
