#include <iostream>
using namespace std;

int main() {
    int T;
    cin >> T;

    while (T--) {
        int cx, cy, r, x, y;
        cin >> cx >> cy >> r >> x >> y;

        long long r_squared = static_cast<long long>(r) * r;
        long long dx = x - cx;
        long long dy = y - cy;
        long long distance_squared = static_cast<long long>(dx) * dx + static_cast<long long>(dy) * dy;

        if (distance_squared <= r_squared) {
            cout << "yes" << endl;
        } else {
            cout << "no" << endl;
        }
    }

    return 0;
}
