#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int I, N, R;
    while (cin >> I >> N >> R) {
        if (I == N) {
            cout << "Infinity" << endl;
        } else {
            double average = static_cast<double>(R) / (I - N);
            cout << fixed << setprecision(2) << average << endl;
        }
    }
    return 0;
}
