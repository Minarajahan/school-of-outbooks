#include <iostream>
using namespace std;

int main() {
    int T;
    cin >> T;
    
    while (T--) {
        unsigned long long N;
        cin >> N;
        
        if (N == 0 || N == 1) {
            cout << "ODD" << endl;
        } else {
            cout << "EVEN" << endl;
        }
    }
    
    return 0;
}
