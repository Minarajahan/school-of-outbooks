#include <iostream>
using namespace std;

int main() {
    int Px, Py, Qx, Qy;
    
    while (cin >> Px >> Py >> Qx >> Qy) {
        int P1x = 2 * Qx - Px;
        int P1y = 2 * Qy - Py;
        
        cout << P1x << " " << P1y << endl;
    }
    
    return 0;
}
