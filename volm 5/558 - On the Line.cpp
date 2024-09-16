#include <iostream>
using namespace std;

int main() {
    int x1, y1, x2, y2, x3, y3;
    
    while (cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3) {
        int determinant = (x2 - x1) * (y3 - y1) - (y2 - y1) * (x3 - x1);
        
        if (determinant == 0) {
            cout << "Yes" << endl;
        } else {
            cout << "No" << endl;
        }
    }
    
    return 0;
}
