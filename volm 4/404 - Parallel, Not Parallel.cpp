#include <iostream>
using namespace std;

int main() {
    int a1, b1, c1, a2, b2, c2;
    while (cin >> a1 >> b1 >> c1 >> a2 >> b2 >> c2) {
        if (a1 * b2 == a2 * b1) {
            cout << "The lines are parallel." << endl;
        } else {
            cout << "The lines are not parallel." << endl;
        }
    }
    return 0;
}
