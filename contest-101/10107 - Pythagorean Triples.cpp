#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int T;
    cin >> T;  
    
    for (int t = 1; t <= T; t++) {
        int a, b, c;
        cin >> a >> b >> c;
        
        
        if (a > 0 && b > a && c > b && (a * a + b * b == c * c)) {
            cout << "Case " << t << ": Yes" << endl;
        } else {
            cout << "Case " << t << ": No" << endl;
        }
    }

    return 0;
}
