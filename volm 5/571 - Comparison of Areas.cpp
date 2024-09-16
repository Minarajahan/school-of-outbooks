#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int T;
    cin >> T;
    
    for (int caseNum = 1; caseNum <= T; ++caseNum) {
        int r, h, b;
        cin >> r >> h >> b;
        
        double pi = 3.1416;
        double areaCircle = pi * r * r;
        double areaTriangle = 0.5 * b * h;
        
        if (areaCircle > areaTriangle) {
            cout << "Case " << caseNum << ": The circle is larger." << endl;
        } else {
            cout << "Case " << caseNum << ": The triangle is larger." << endl;
        }
    }
    
    return 0;
}
