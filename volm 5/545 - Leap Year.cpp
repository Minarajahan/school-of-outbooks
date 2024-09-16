#include <iostream>
using namespace std;

int main() {
    int T;
    cin >> T;
    
    while (T--) {
        int Y;
        cin >> Y;
        
        if ((Y % 400 == 0) || (Y % 4 == 0 && Y % 100 != 0)) {
            cout << "Leap year" << endl;
        } else {
            cout << "Ordinary year" << endl;
        }
    }
    
    return 0;
}
